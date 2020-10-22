#include "menuitem.h"

MenuItem::MenuItem(std::string name, void (*func)())
{
    name_ = name;
    func_ = func;
}

std::string MenuItem::getName()
{
    return name_;
}

void MenuItem::f()
{
    (*func_)();
}

void MenuItem::setName(std::string &s)
{
    name_ = s;
}

void MenuItem::setFunc(void (*func)())
{
    func_ = func;
}
