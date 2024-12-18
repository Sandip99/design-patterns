#include "Client.h"
#include "iostream"

using namespace std;

void Client::update(float temp, int pressure) {
    cout << "Client ID: " << id << " Temp: " << temp << " Pressure: " << pressure << endl;
}

Client::Client(int id) {
    this->id = id;
}