#include <iostream>
using namespace std;

class Demo {
public:
    int *a;

    Demo(int x) {
        a = new int;
        *a = x;
    }

    
    Demo(const Demo &d) {
        a = new int;
        *a = *(d.a);
    }

    void show() {
        cout << *a << endl;
    }

    ~Demo() {
        delete a;
    }
};

int main() {
    Demo d1(10);     
    Demo d2 = d1;   

    cout << "d1 value: ";
    d1.show();

    cout << "d2 value: ";
    d2.show();

    return 0;
}
