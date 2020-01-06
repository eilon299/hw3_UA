//
// Created by shach on 04/01/2020.
//
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::ostream;

#ifndef CAR_H
#define CAR_H

class Car {
    string name;
    int year;

public:
    Car(const Car& car);;
    Car(const string& name, int year);
    friend ostream& operator<<(ostream&, const Car& car);
    friend bool compareCars (const Car& first, const Car& second);
};

bool compareCars (const Car& first, const Car& second);

#endif //UNTITLED_CAR_H
