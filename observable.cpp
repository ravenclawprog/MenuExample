#include "observable.h"

void Observable::addObserver(Observer *observer)
{
    observers_.push_back(observer);
}

void Observable::notifyUpdate()
{
    for(auto iter: observers_)
    {
        iter->update();
    }
}
