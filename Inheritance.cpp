#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Helper functions for input validation
bool isValidName(const string& name) {
    if (name.empty()) return false;
    for (char c : name) {
        if (isdigit(c)) return false; // name should not contain digits
    }
    return true;
}

bool isValidMobile(const string& mobile) {
    if (mobile.length() != 10) return false;
    for (char c : mobile) {
        if (!isdigit(c)) return false;
    }
    return true;
}

// Base Employee class
class Employee {
protected:
    string Emp_name;
    int Emp_id;
    string Address;
    string Mail_id;
    string Mobile_no; // string, not number
public:
    void inputDetails() {
        do {
            cout << "Enter Employee Name: ";
            getline(cin, Emp_name);
            if (!isValidName(Emp_name)) {
                cout << "Invalid name! Only letters allowed.\n";
            }
        } while (!isValidName(Emp_name));

        while (true) {
            cout << "Enter Employee ID: ";
            cin >> Emp_id;
            cin.ignore();
            if (Emp_id > 0) break;
            cout << "Invalid ID! Must be positive.\n";
        }

        cout << "Enter Address: ";
        getline(cin, Address);

        cout << "Enter Mail ID: ";
        getline(cin, Mail_id);

        do {
            cout << "Enter Mobile Number: ";
            getline(cin, Mobile_no);
            if (!isValidMobile(Mobile_no)) {
                cout << "Invalid mobile! Must be 10 digits.\n";
            }
        } while (!isValidMobile(Mobile_no));
    }

    void displayDetails() {
        cout << "\nName: " << Emp_name
             << "\nID: " << Emp_id
             << "\nAddress: " << Address
             << "\nMail: " << Mail_id
             << "\nMobile: " << Mobile_no << endl;
    }
};

// Programmer class
class Programmer : public Employee {
private:
    double Basic_Pay;
public:
    void inputBP() {
        while (true) {
            cout << "Enter Basic Pay for Programmer: ";
            cin >> Basic_Pay;
            cin.ignore();
            if (Basic_Pay > 0) break;
            cout << "Invalid pay! Must be positive.\n";
        }
    }

    void calculateSalary() {
        double DA = 0.52 * Basic_Pay;
        double HRA = 0.27 * Basic_Pay;
        double PF = 0.12 * Basic_Pay;
        double Staff_Club = 0.001 * Basic_Pay;
        double Gross = Basic_Pay + DA + HRA;
        double Net = Gross - (PF + Staff_Club);

        cout << "\n---Programmer Pay Slip---";
        displayDetails();
        cout << "\nBasic Pay: " << Basic_Pay
             << "\nDA: " << DA
             << "\nHRA: " << HRA
             << "\nPF: " << PF
             << "\nStaff Club: " << Staff_Club
             << "\nGross: " << Gross
             << "\nNet Salary: " << Net << endl;
    }
};

// Team Manager class
class TeamManager : public Employee {
private:
    double Basic_Pay;
public:
    void inputBP() {
        while (true) {
            cout << "Enter Basic Pay for Team Manager: ";
            cin >> Basic_Pay;
            cin.ignore();
            if (Basic_Pay > 0) break;
            cout << "Invalid pay! Must be positive.\n";
        }
    }

    void calculateSalary() {
        double DA = 0.52 * Basic_Pay;
        double HRA = 0.27 * Basic_Pay;
        double PF = 0.12 * Basic_Pay;
        double Staff_Club = 0.001 * Basic_Pay;
        double Gross = Basic_Pay + DA + HRA;
        double Net = Gross - (PF + Staff_Club);

        cout << "\n---Team Manager Pay Slip---";
        displayDetails();
        cout << "\nBasic Pay: " << Basic_Pay
             << "\nDA: " << DA
             << "\nHRA: " << HRA
             << "\nPF: " << PF
             << "\nStaff Club: " << Staff_Club
             << "\nGross: " << Gross
             << "\nNet Salary: " << Net << endl;
    }
};

// Assistant Project Manager class
class AssistantProjectManager : public Employee {
private:
    double Basic_Pay;
public:
    void inputBP() {
        while (true) {
            cout << "Enter Basic Pay for Assistant Project Manager: ";
            cin >> Basic_Pay;
            cin.ignore();
            if (Basic_Pay > 0) break;
            cout << "Invalid pay! Must be positive.\n";
        }
    }

    void calculateSalary() {
        double DA = 0.52 * Basic_Pay;
        double HRA = 0.27 * Basic_Pay;
        double PF = 0.12 * Basic_Pay;
        double Staff_Club = 0.001 * Basic_Pay;
        double Gross = Basic_Pay + DA + HRA;
        double Net = Gross - (PF + Staff_Club);

        cout << "\n---Assistant Project Manager Pay Slip---";
        displayDetails();
        cout << "\nBasic Pay: " << Basic_Pay
             << "\nDA: " << DA
             << "\nHRA: " << HRA
             << "\nPF: " << PF
             << "\nStaff Club: " << Staff_Club
             << "\nGross: " << Gross
             << "\nNet Salary: " << Net << endl;
    }
};

int main() {
    Programmer p;
    cout << "\nEnter Programmer Details:\n";
    p.inputDetails();
    p.inputBP();
    p.calculateSalary();

    TeamManager t;
    cout << "\nEnter Team Manager Details:\n";
    t.inputDetails();
    t.inputBP();
    t.calculateSalary();

    AssistantProjectManager a;
    cout << "\nEnter Assistant Project Manager Details:\n";
    a.inputDetails();
    a.inputBP();
    a.calculateSalary();

    return 0;
}