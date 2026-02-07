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
        cout << "Enter account number: ";
        cin >> accnum;

        cout << "Enter account balance: ";
        cin >> accbal;

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
    cout << "Enter number of accounts: ";
    cin >> n;

    bank b[20];

    for (int i = 0; i < n; i++) {
        b[i].input();
    }

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
