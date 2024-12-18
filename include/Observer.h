#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
    public:
        virtual void update(float temp, int pressure) = 0;
};

#endif