#ifndef CONSOLECONTROLLER_H
#define CONSOLECONTROLLER_H
#include "modelmenu.h"
class ConsoleController
{
public:
    ConsoleController(ModelMenu& menu);
    void start();
private:
    ModelMenu& model_;
};
#endif // CONSOLECONTROLLER_H
