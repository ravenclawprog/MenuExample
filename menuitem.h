#ifndef MENUITEM_H
#define MENUITEM_H
#include <string>

void nullfunc();

class MenuItem
{
public:
    /// Конструктор меню
    MenuItem(std::string name = "Null menu item",
             void (*func)() = nullfunc);
    /// Получить имя пунтка меню
    std::string getName();
    /// Вызвать функцию меню
    void f();
    /// Установить имя меню
    void setName(std::string &s);
    /// Установить имя функции
    void setFunc(void (*func)());
private:
    std::string name_;      // Имя пункта меню
    void (*func_)();        // вызываемая функция пункта меню
};

#endif // MENUITEM_H
