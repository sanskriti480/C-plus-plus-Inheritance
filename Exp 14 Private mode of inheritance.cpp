#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) {
        name = n; 
        age = a;
    }
    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class
class Student : private Person {
    int rollNo;
public:
    void setStudent(string n, int a, int r) {
        setPerson(n, a);    
        rollNo = r;
    }
    void showStudent(){
        showPerson();       
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.setStudent("Ankit", 20, 101);
    s.showStudent();

    /* Not allowed because of private inheritance
    s.setPerson("Ravi", 25);   
    s.showPerson();            
  */  
  return 0;
}

/*
Sample Output: 
Name: Ankit, Age: 20
Roll No: 101
*/
