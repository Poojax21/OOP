#include <iostream>
using namespace std;

class Student {
public:   

   
    Student() {
        cout << "Constructor is called!" << endl;
    }

    
    ~Student() {
        cout << "Destructor is called!" << endl;
    }
};

int main() {

    cout << "Object creation starts" << endl;

    Student s1;   

    cout << "Inside main function" << endl;

    return 0;     
}
