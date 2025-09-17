//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 14

#include <iostream>
using namespace std;

// Base class
class Rectangle {
public:
    int width, height;

    void read_input() {
        cin >> width >> height;  // just input, no printing
    }

    void display() {
        cout << width << " " << height << "\n";  // space separated
    }
};

// Derived class (single inheritance)
class RectangleArea : public Rectangle {
public:
    void display() {
        int area = width * height;
        cout << area << "\n";
    }
};

int main() {
    RectangleArea r_area;

    // Read the width and height
    r_area.read_input();

    // Print width and height (using base class display)
    r_area.Rectangle::display();

    // Print area (using derived class display)
    r_area.display();

    return 0;
}

/*
Sample Output: 
10 5

10 5 
50
*/
