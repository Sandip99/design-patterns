#include "Client.h"
#include "WeatherData.h"

int main() {
    WeatherData weatherdata;

    Client c1(1), c2(2), c3(3);

    weatherdata.registerObserver(&c1);
    weatherdata.registerObserver(&c2);
    weatherdata.registerObserver(&c3);

    weatherdata.setData(17.5, 100);

    weatherdata.removeObserver(&c2);

    weatherdata.setData(16, 90);

}