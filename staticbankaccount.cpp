#include <iostream>
using namespace std;

class bank {
private:
    int accnum;
    float accbal;

    static int acctotal;
    static float baltotal;

public:
    void input() {

        while (true) {
            cout << "Enter account number: ";
            cin >> accnum;

            if (cin.fail() || accnum <= 0) {
                cout << "Invalid account number. Enter again.\n";
                cin.clear();
                cin.ignore(1000, '\n');
            } else {
                break;
            }
        }

        while (true) {
            cout << "Enter account balance: ";
            cin >> accbal;

            if (cin.fail() || accbal <= 0) {
                cout << "Invalid balance. Enter again.\n";
                cin.clear();
                cin.ignore(1000, '\n');
            } else {
                break;
            }
        }

        acctotal++;
        baltotal += accbal;
    }

    void print() {
        cout << "Account: " << accnum << "\tBalance: " << accbal << endl;
    }

    void ascending(bank other) {
        if (accbal < other.accbal) {
            cout << accbal << " " << other.accbal << endl;
        } else {
            cout << other.accbal << " " << accbal << endl;
        }
    }

    static void showtotal() {
        cout << "Total Accounts: " << acctotal << endl;
        cout << "Total Balance: " << baltotal << endl;
    }
};

int bank::acctotal = 0;
float bank::baltotal = 0;

int main() {
    int n;

    while (true) {
        cout << "Enter number of accounts: ";
        cin >> n;

        if (cin.fail() || n <= 0 || n > 20) {
            cout << "Invalid number. Enter between 1 and 20.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            break;
        }
    }

    bank b[20];

    for (int i = 0; i < n; i++) {
        cout << "\nAccount " << i + 1 << endl;
        b[i].input();
    }

    cout << "\nDetails:\n";
    for (int i = 0; i < n; i++) {
        b[i].print();
    }

    bank::showtotal();

    if (n >= 2) {
        cout << "Ascending order of first two balances: ";
        b[0].ascending(b[1]);
    }

    return 0;
}
