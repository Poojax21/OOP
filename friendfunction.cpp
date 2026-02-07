#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    friend void showEmployee(Employee e);
};

void showEmployee(Employee e) {
    cout << "Employee ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
    cout << "Salary: " << e.salary << endl;
}

int main() {
    int id;
    string name;
    float salary;

    cout << "Enter employee id: ";
    cin >> id;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter salary: ";
    cin >> salary;

    Employee e1(id, name, salary);
    showEmployee(e1);

    return 0;
}
