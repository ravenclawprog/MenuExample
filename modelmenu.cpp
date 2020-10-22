#include "modelmenu.h"

ModelMenu::ModelMenu(std::list<std::list<MenuItem> > &menus,
                     int start_menu,
                     int start_position):
    l_(menus),
    cursor_menu_(start_menu),
    cursor_position_(start_position)
{

}

int ModelMenu::getCursorMenu()
{
    return cursor_menu_;
}

int ModelMenu::getCursorPosition()
{
    return cursor_position_;
}

void ModelMenu::setCursorMenu(int cursor_menu)
{
    cursor_menu_ = cursor_menu;
    cursor_position_ = 0;
    notifyUpdate();
}

void ModelMenu::setCursorPosition(int cursor_position)
{
    cursor_position_ = cursor_position;
    notifyUpdate();
}

std::list<MenuItem> ModelMenu::getMenu()
{
    int menu_count = 0;
    for(auto &i: l_){
        if(menu_count == cursor_menu_){
            std::list<MenuItem> result = i;
            return result;
        }
        menu_count++;
    }
    std::list<MenuItem> empty;
    return empty;
}

int ModelMenu::countOfMenuItem()
{
    int menu_count = 0;
    for(auto &iter : l_){
        if(menu_count == cursor_menu_){
            return static_cast<int>(iter.size());
        }
        menu_count++;
    }
    return 0;
}

void ModelMenu::executeFunction()   /// ToDo: Кэширование текущего элемента пункта меню для быстрого выполнения функции
{
    int menu_count = 0;
    int position_count = 0;
    for(auto &i: l_){
        for(auto &j: i){
            if(menu_count == cursor_menu_ &&
                    position_count == cursor_position_){
                j.f();
                return ;
            }
            position_count++;
        }
        position_count = 0;
        menu_count++;
    }
    notifyUpdate();
}
