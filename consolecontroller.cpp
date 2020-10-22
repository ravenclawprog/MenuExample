#include "consolecontroller.h"
#include <iostream>
ConsoleController::ConsoleController(ModelMenu &menu):
    model_(menu)
{

}

void ConsoleController::start()
{
    std::string result = "";
    model_.setCursorMenu(0);
    std::cout << "Hello, this is menu example!" << std::endl;
    do{

        std::cin >> result;
        if(result == "up"){
            int cp = model_.getCursorPosition();
            if((cp - 1) >= 0){
                model_.setCursorPosition(cp - 1);
            } else {
                model_.setCursorPosition(cp);
            }
        } else if (result == "down"){
            int cp = model_.getCursorPosition();
            if((cp + 1) < model_.countOfMenuItem()){
                model_.setCursorPosition(cp + 1);
            } else {
                model_.setCursorPosition(cp);
            }
        } else if (result == "o"){
            model_.executeFunction();
        } else if (result == "exit"){
            result.clear();
            break;
        }

    }while(true);
}
