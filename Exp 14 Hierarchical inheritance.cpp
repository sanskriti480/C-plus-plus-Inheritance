//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 14

#include <iostream>
using namespace std;

class Appliance {
public: 
    int price;

    void setPrice() {
        cout << "Enter Price: "<<"\n";
        cin >> price;
        cout << "Price : " << price << "\n";
    }

    void Purpose() {
        cout << "The parent Class" << "\n";
    }
};

class WashingMachine : public Appliance {
public: 
    void Purpose() {
        cout << "Wash Clothes" << "\n";
    }
};

class Microwave : public Appliance {
public: 
    void Purpose() {
        cout << "Cook Food" << "\n";
    }
};

int main() {
    // Object of Washing Machine
    WashingMachine w;
    cout<<"---Calling setPrice of Parent Class Appliances---"<<"\n";
    w.setPrice();
    cout<<"---Calling Purpose of WashingMachine Class---"<<"\n";
    w.Purpose();
    cout<<"---Calling Purpose of Appliance Class---"<<"\n";
    w.Appliance::Purpose();

    // Object of Microwave
    Microwave m;
    cout<<"---Calling setPrice of Parent Class Appliances---"<<"\n";
    m.setPrice();
    cout<<"---Calling Purpose of Microwave Class---"<<"\n";
    m.Purpose();
    cout<<"---Calling Purpose of Appliance Class---"<<"\n";
    m.Appliance::Purpose();

    return 0;
}

/*
Sample Output: 
---Calling setPrice of Parent Class Appliances---
Enter Price: 
Price : 10000
---Calling Purpose of WashingMachine Class---
Wash Clothes
---Calling Purpose of Appliance Class---
The parent Class
---Calling setPrice of Parent Class Appliances---
Enter Price: 
Price : 20000
---Calling Purpose of Microwave Class---
Cook Food
---Calling Purpose of Appliance Class---
The parent Class
*/
