#include "WeatherData.h"
#include "algorithm"

void WeatherData::registerObserver(Observer *observer) {
    observers.push_back(observer);
}

void WeatherData::removeObserver(Observer *observer) {
    auto it = find(observers.begin(), observers.end(), observer);

    if (it != observers.end()) {
        observers.erase(it);
    }
}

void WeatherData::notifyObserver() {
    for (auto observer : observers) {
        observer->update(temp, pressure);
    }
}

void WeatherData::setData(float temp, int pressure) {
    this->temp = temp;
    this->pressure = pressure;
    notifyObserver();
}