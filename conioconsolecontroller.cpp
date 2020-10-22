#include "conioconsolecontroller.h"
#include <string>
#include <conio.h>
#include <iostream>

CONIOConsoleController::CONIOConsoleController(ModelMenu &menu):
    model_(menu)
{

}

void CONIOConsoleController::start()
{
    std::string temp = "";
    std::string result = "";
    model_.setCursorMenu(0);
    std::cout << "Hello, this is menu example!" << std::endl;
    bool keyArrow = false;
    do{
        int c1 = 0;
        int c2 = 0;
        c1 = getch();
//        std::cout << "c1 = " << c1 << std::endl;
        if(c1 == 224){
            keyArrow = true;
            c2 = getch();
        }
        if(!keyArrow){
            if(c1 == 13 && temp == ""){
                model_.executeFunction();
            } else if (c1 == 13 && temp != ""){
                result = temp;
                temp.clear();
            } else if (c1 != 13){
                temp.push_back(static_cast<char>(c1));
            }
            if(std::isprint(c1)){
                std::putchar(c1);
            }
        }
        if(keyArrow && c2 == 72){
            int cp = model_.getCursorPosition();
            if((cp - 1) >= 0){
                model_.setCursorPosition(cp - 1);
            } else {
                model_.setCursorPosition(cp);
            }
        } else if (keyArrow && c2 == 80){
            int cp = model_.getCursorPosition();
            if((cp + 1) < model_.countOfMenuItem()){
                model_.setCursorPosition(cp + 1);
            } else {
                model_.setCursorPosition(cp);
            }
        } else if (c1 == 3 || result == "exit"){
            result.clear();
            break;
        }
        keyArrow = false;
    }while(true);
}
