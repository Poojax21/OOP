#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;

    cout << m.add(2, 3) << endl;        // 5
    cout << m.add(2, 3, 4) << endl;     // 9
    cout << m.add(2.5, 3.5) << endl;    // 6.0

    return 0;
}
