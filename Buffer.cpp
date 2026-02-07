#include <iostream>
using namespace std;

class SensorBuffer {
private:
    int *buffer;
    int size;

public:
    SensorBuffer(int s) {
        size = s;
        buffer = new int[size];

        cout << "Enter sensor readings:\n";
        for (int i = 0; i < size; i++) {
            while (!(cin >> buffer[i])) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Enter an integer: ";
            }
        }
    }

    ~SensorBuffer() {
        delete[] buffer;
        cout << "Memory released";
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << buffer[i] << " ";
        }
    }
};

int main() {
    SensorBuffer sb(3);
    sb.display();
    return 0;
}
