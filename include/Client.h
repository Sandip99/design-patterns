#ifndef CLIENT_H
#define CLIENT_H

#include "Observer.h"

class Client : public Observer {
    private:
        int id;
    public:
        Client(int id);
        void update(float temp, int pressure) override;
};

#endif