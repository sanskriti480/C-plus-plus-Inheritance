//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 14

#include <iostream>
using namespace std;

class Vehicle {
public:
    void show() { cout << "I am a Vehicle\n"; }
};

class Car : public Vehicle {
public:
    void showCar() { cout << "I am a Car\n"; }
};

class ElectricCar : public Car {
public:
    void showElectric() { cout << "I am an Electric Car\n"; }
};

int main() {
    ElectricCar e;
    e.show();        // from Vehicle
    e.showCar();     // from Car
    e.showElectric();// from ElectricCar
    return 0;
}

/*
Sample Output: 
I am a Vehicle
I am a Car
I am an Electric Car
*/
