#ifndef OBSERVER_H
#define OBSERVER_H


class Observer
{
public:
    Observer() = default;
    virtual void update();
    virtual ~Observer();
};

#endif // OBSERVER_H
