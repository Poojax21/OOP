#include <iostream>
using namespace std;

class Shape {
public:
    void area() {
        cout << "Calculating area of shape" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area of Rectangle = length * width" << endl;
    }
};

int main() {
    Rectangle r;
    r.area();   
    return 0;
}
