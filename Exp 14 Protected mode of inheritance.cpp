#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    string brand = "Ford";
    void color() {
        cout << "Red!\n";
    }
};

// Derived class
class Car : protected Vehicle {
public:
    string model = "Mustang";

    void showDetails() {
        // Allowed because base members are protected in Car
        color();
        cout << brand + " " + model << endl;
    }
};

// Further derived class
class SportsCar : public Car {
public:
    void showSportsCar() {
        // Still allowed (protected members accessible to derived classes)
        color();
        cout << brand + " " + model << " [Sports Edition]" << endl;
    }
};

int main() {
    Car myCar;
    myCar.showDetails();

    SportsCar s;
    s.showSportsCar();

    /*Not allowed in main because protected inheritance hides them
    myCar.color();
    cout << myCar.brand;
    */
    return 0;
}

/*
Sample Output: 
Red!
Ford Mustang
Red!
Ford Mustang [Sports Edition]
*/
