#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
        cout << "Constructor called" << endl;
        
    }

    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    int roll;
    string name;
    float marks;

    cout << "Enter Roll No: ";
    cin >> roll;
    
    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    Student* s = new Student(roll, name, marks);

    s->display();

    delete s;

    return 0;
}
