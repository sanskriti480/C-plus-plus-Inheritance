//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 14

#include <iostream>
using namespace std;

// Base class 1 - Personal details
class PersonalInfo {
public:
    string name;
    int age;

    void readPersonal() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }

    void displayPersonal() {
        cout << "Name : " << name << "\n";
        cout << "Age : " << age << "\n";
    }
};

// Base class 2 - Academic details
class AcademicInfo {
public:
    int prn;
    float marks;

    void readAcademic() {
        cout << "Enter PRN and marks: ";
        cin >> prn >> marks;
    }

    void displayAcademic() {
        cout << "PRN : " << prn <<"\n";
        cout<<" Marks : " << marks << "\n";
    }
};

// Derived class - Student (inherits from both)
class Student : public PersonalInfo, public AcademicInfo {
public:
    void displayStudent() {
        cout << "\n--- Student Details ---\n";
        displayPersonal();
        displayAcademic();
    }
};

int main() {
    Student s;

    s.readPersonal();
    s.readAcademic();

    s.displayStudent();

    return 0;
}


/*
Sample Output: 
Sanskriti 19
039 94.5

--- Student Details ---
Name : Sanskriti
Age : 19
PRN : 039
Marks : 94.5
*/
