//
// Created by shach on 04/01/2020.
//

#include "Car.h"
#include <string.h>
using std::string;

Car::Car(const Car& car):
        name(car.name),
        year(car.year) {
}

Car::Car(const string& name, int year) :
        name(name),
        year(year) {
}


ostream& operator<<(ostream& os, const Car& car) {
    return os << car.name << " ==>> " << car.year;
}

bool compareCars (const Car& first, const Car& second) {
    return ((first.name== second.name) && (first.year == second.year));

}

