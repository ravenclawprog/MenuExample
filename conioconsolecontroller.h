#ifndef CONIOCONSOLECONTROLLER_H
#define CONIOCONSOLECONTROLLER_H
#include "modelmenu.h"

class CONIOConsoleController
{
public:
    CONIOConsoleController(ModelMenu& menu);
    void start();
private:
    ModelMenu& model_;
};

#endif // CONIOCONSOLECONTROLLER_H
