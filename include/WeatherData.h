#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Subject.h"
#include "Observer.h"
#include "vector"
#include "iostream"

using namespace std;

class WeatherData : public Subject {
    private:
        float temp;
        int pressure;
        vector<Observer*> observers;

    public:
        void registerObserver(Observer *observer) override;

        void removeObserver(Observer *observer) override;

        void notifyObserver() override;

        void setData(float temp, int pressure);
};

#endif