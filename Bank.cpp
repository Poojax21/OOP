#include<iostream>
using namespace std;

class BankManager;

class BankAccount{
private:
    int accno;
    int bal;
    string name;
    int pin;
    int minbal = 1000;

public:
    BankAccount(int a , int b , string n , int p){
        accno = a;
        name = n;
        pin = p;

        if(b >= minbal){
            bal = b;
        }
        else{
            cout<<"Balance should be greater than minimum balance (1000)\n";
            bal = minbal;
        }
    }

    void checkbal(int p){
        if(p == pin){
            cout<<"Balance = "<<bal<<endl;
        }
        else{
            cout<<"Wrong pin\n";
        }
    }

    void deposit(int amt, int p){
        if(p == pin && amt > 0){
            bal += amt;
            cout<<"Deposited Successfully\n";
        }
        else{
            cout<<"Invalid deposit\n";
        }
    }

    void withdraw(int amt, int p){
        if(p == pin && bal - amt >= minbal){
            bal -= amt;
            cout<<"Withdrawn Successfully\n";
        }
        else{
            cout<<"Cannot withdraw (wrong pin or minimum balance issue)\n";
        }
    }

    friend class BankManager;
    friend void show(BankAccount &b);
};

void show(BankAccount &b){
    cout<<"Account No: "<<b.accno<<endl;
    cout<<"Name: "<<b.name<<endl;
}

class BankManager{
public:
    void display(BankAccount &b){
        cout<<"Manager Access\n";
        cout<<"Account No: "<<b.accno<<endl;
        cout<<"Name: "<<b.name<<endl;
        cout<<"Balance: "<<b.bal<<endl;
    }
};

int main(){
    int a , b , p;
    string n;

    cout<<"Enter Name: ";
    cin>>n;

    cout<<"Enter Account No: ";
    cin>>a;

    cout<<"Enter Balance: ";
    cin>>b;

    cout<<"Enter Pin: ";
    cin>>p;

    BankAccount b1(a , b , n , p );
    BankManager bm;

    int choice, amt, userPin;

    cout<<"\n1.Check Balance\n2.Deposit\n3.Withdraw\n";
    cin>>choice;

    if(choice == 1){
        cout<<"Enter Pin: ";
        cin>>userPin;
        b1.checkbal(userPin);
    }
    else if(choice == 2){
        cout<<"Enter amount: ";
        cin>>amt;
        cout<<"Enter Pin: ";
        cin>>userPin;
        b1.deposit(amt, userPin);
    }
    else if(choice == 3){
        cout<<"Enter amount: ";
        cin>>amt;
        cout<<"Enter Pin: ";
        cin>>userPin;
        b1.withdraw(amt, userPin);
    }

    cout<<"\nManager View:\n";
    bm.display(b1);

    return 0;
}
