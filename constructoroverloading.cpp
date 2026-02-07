#include<iostream>
using namespace std;

class Sample {
public:
    Sample() {
        cout << "Default\n";
    }

    Sample(int x) {
        cout << "One Parameter\n";
    }

    Sample(int x, int y) {
        cout << "Two Parameter\n";
    }
};

int main() {
    Sample s1;
    Sample s2(10);
    Sample s3(10,20);
}
