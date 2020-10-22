#include "consoleview.h"
#include <iostream>

ConsoleView::ConsoleView(ModelMenu &model):
    model_(model)
{
    model_.addObserver(this);
}

void ConsoleView::update()
{
    std::list<MenuItem> pr = model_.getMenu();
    printMenu(pr,model_.getCursorPosition());
}

void ConsoleView::printMenu(std::list<MenuItem> &m_, int position)
{
    clearscr();
    int count = 1;
    for(auto &i: m_){
        if(position == count - 1){
            std::cout << ">" << count << ". ";
        } else {
            std::cout << " " << count << ". ";
        }

        std::cout << i.getName() << std::endl;
        count++;
    }
}

void ConsoleView::clearscr()
{
#if defined _WIN32
    system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
#endif
}

void ConsoleView::farawell()
{
    std::cout << "Good bye." << std::endl;
}
