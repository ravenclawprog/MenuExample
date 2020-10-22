#ifndef SETTINGS_H
#define SETTINGS_H
#include <list>
#include <string>
#include <iostream>
#include "menuitem.h"
#include "modelmenu.h"
#include "consoleview.h"
#include "conioconsolecontroller.h"
#include "consolecontroller.h"

// прототипы вызываемых функций
void foo();
void bar();
void ellipsoid();
void imaginaryellipsoid();
void hyperboloid();
void cone();
void lineareq();
void quadriceq();
void cubiceq();
void about();
void toPlanes();
void toEquations();
void toMainMenu();
void toEquations();

// пункты меню
const std::list<MenuItem> MainMenu{{"About", about},
                                   {"to \"Equations\"", toEquations},
                                   {"to \"Planes\"", toPlanes}};
const std::list<MenuItem> Planes{{"Ellipsoid",ellipsoid},
                                 {"Imaginary Ellipsoid", imaginaryellipsoid},
                                 {"Hyperboloid", hyperboloid},
                                 {"Cone", cone},
                                 {"to \"Equations\"", toEquations},
                                 {"to \"Main Menu\"", toMainMenu}};
const std::list<MenuItem> Equations{{"Linear equations",lineareq},
                                 {"Quadric equations", quadriceq},
                                 {"Cubic equations", cubiceq},
                                 {"to \"Planes\"", toPlanes},
                                 {"to \"Main Menu\"", toMainMenu}};
static std::list< std::list<MenuItem> > MenuList{MainMenu,Planes,Equations};

//Переменные - модель меню, отображение, контроллер
static ModelMenu m(MenuList);
static ConsoleView v(m);
static CONIOConsoleController c(m);

// Реализация функций
void foo(){
    std::cout << "foo" << std::endl;
}

void bar(){
    std::cout << "bar" << std::endl;
}

void ellipsoid(){
    std::cout << "x^2/a^2 + y^2/b^2 + z^2/c^2 = 1" << std::endl;
}

void imaginaryellipsoid(){
    std::cout << "x^2/a^2 + y^2/b^2 + z^2/c^2 = -1" << std::endl;
}

void hyperboloid(){
    std::cout << "x^2/a^2 + y^2/b^2 - z^2/c^2 = 1" << std::endl;
}

void cone(){
    std::cout << "x^2/a^2 + y^2/b^2 - z^2/c^2 = 0" << std::endl;
}

void lineareq(){
    std::cout << "a1*x1 + a2*x2 + ... + an*xn + b = 0" << std::endl;
}

void quadriceq(){
    std::cout << "a*x^2 + b*x + c = 0, a != 0" << std::endl;
}

void cubiceq(){
    std::cout << "a*x^3 + b*x^2 + c*x + d = 0, a != 0" << std::endl;
}
void about(){
    std::cout << "This is example of menu." << std::endl;
    std::cout << "It's provided necessary data types to store name of item menu and function to execute." << std::endl;
    std::cout << "In this exaple viewed mathematical formulas for planes and equations in common form." << std::endl;
}

void toPlanes(){
    m.setCursorMenu(1);
}

void toEquations(){
    m.setCursorMenu(2);
}

void toMainMenu(){
    m.setCursorMenu(0);
}
#endif // SETTINGS_H
