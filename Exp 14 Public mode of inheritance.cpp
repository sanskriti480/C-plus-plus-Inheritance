//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 14

#include <iostream>
using namespace std;

// Base class
class Vehicle {
  public: 
    string brand = "Ford";
    void color() {
      cout << “Red! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.color();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

/* Output:
Red! 
Ford Mustang
*/

