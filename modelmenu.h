#ifndef MODELMENU_H
#define MODELMENU_H
#include "observable.h"
#include "menuitem.h"
#include <list>

class ModelMenu: public Observable
{
public:
    ///
    /// \brief ModelMenu
    /// Конструктор создает модель меню. При инициализации объекта ему подается список списков пунктов меню (обязательно), которым он инициализирует свое поле.
    /// \param menus
    /// Ссылка на список меню
    /// \param start_menu
    /// начальное меню
    /// \param start_position
    /// начальная позиция пункта
    ModelMenu(std::list < std::list<MenuItem> >& menus,
              int start_menu = 0,
              int start_position = 0);

    /// Получить текущий номер меню (номер соответсвует номеру меню в списке
    int getCursorMenu();

    /// Получить текущий номер пункта меню (номер соответсвует номеру пункта меню в списке
    int getCursorPosition();

    /// Установить новый номер меню
    void setCursorMenu(int cursor_menu);

    /// Установить новую позицию
    void setCursorPosition(int cursor_position);

    /// Получить список пунктов меню, которая имеет номер cursor_menu в списке l_
    std::list<MenuItem> getMenu();

    /// число пунктов меню в списке l_
    int countOfMenuItem();

    /// Исполнить функцию, которая указана в пункте меню, на которую указывают cursor_menu и cursor_position
    void executeFunction();
private:
    std::list< std::list <MenuItem> >& l_;  // список имеющихся меню (вернее, список списков, потому что меню представляет собой список пунктов меню)
    int cursor_menu_;                       // текущее меню
    int cursor_position_;                   // текущая позиция пункта меню
};

#endif // MODELMENU_H
