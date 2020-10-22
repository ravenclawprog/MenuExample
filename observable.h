#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include "observer.h"
#include <list>
// класс "Обозреваемый"
class Observable
{
public:
    /// Конструктор
    Observable() = default;
    /// Добавление обозревателя
    void addObserver(Observer *observer);
    /// Уведомление об обновлении
    void notifyUpdate();
private:
    std::list<Observer*> observers_;// обозреватели
};

#endif // OBSERVABLE_H
