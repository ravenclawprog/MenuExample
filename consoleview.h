#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H
#include "modelmenu.h"
#include "observer.h"
#include <list>

class ConsoleView: public Observer
{
public:
    ConsoleView(ModelMenu& model);
    virtual void update();
    void printMenu(std::list<MenuItem>& m_, int position = -1);
    void clearscr();
    void farawell();
private:
    ModelMenu& model_;
};

#endif // CONSOLEVIEW_H
