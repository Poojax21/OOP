#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name = "Pooja";
    int rollno = 15;
    int m1 = 100, m2 = 98, m3 = 97;

    int total = m1 + m2 + m3;
    float avg = total / 3.0;

    cout << "-----------------------------------------------------------" << endl;
    cout << left
         << setw(11) << "Name"
         << setw(10) << "Roll No"
         << setw(7)  << "Sub1"
         << setw(7)  << "Sub2"
         << setw(7)  << "Sub3"
         << setw(8)  << "Total"
         << setw(8)  << "Average" << endl;
    cout << "-----------------------------------------------------------" << endl;

    cout << left
         << setw(11) << name
         << setw(10) << rollno
         << setw(7)  << m1
         << setw(7)  << m2
         << setw(7)  << m3
         << setw(8)  << total
         << fixed << setprecision(2)
         << setw(8)  << avg << endl;

    cout << "-----------------------------------------------------------" << endl;

    return 0;
}
