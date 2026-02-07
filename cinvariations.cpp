#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int roll, age;

    
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> roll;

    
    while (true) {
        cout << "Enter age (1-100): ";
        cin >> age;
        if (age < 1 || age > 100) {
            cout << "Invalid age. Try again.\n";
        } else {
            break;
        }
    }

    cout << "\nName: " << name;
    cout << "\nRoll: " << roll;
    cout << "\nAge: " << age << endl;

    
    int a, b, c;
    cout << "\nEnter three numbers: ";
    cin >> a >> b >> c;
    cout << "Sum = " << a + b + c << endl;

    
    char ch1, ch2;
    cout << "\nEnter a character (cin >>): ";
    cin >> ch1;

    cin.ignore();
    cout << "Enter a character (cin.get): ";
    cin.get(ch2);

    cout << "\ncin >> ch = " << ch1;
    cout << "\ncin.get(ch) = " << ch2 << endl;

    
    string college, city;
    cin.ignore(); 
    cout << "\nEnter college name: ";
    getline(cin, college);

    cout << "Enter city name: ";
    getline(cin, city);

    cout << "\nCollege: " << college;
    cout << "\nCity: " << city << endl;

    return 0;
}
