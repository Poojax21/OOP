#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void gearChange() = 0;
    virtual void speedUp() = 0;
    virtual void applyBrakes() = 0;
};

class Bicycle : public Vehicle {
public:
    void gearChange() {
        cout << "Bicycle gear changed" << endl;
    }
    void speedUp() {
        cout << "Bicycle speed increased" << endl;
    }
    void applyBrakes() {
        cout << "Bicycle brakes applied" << endl;
    }
};

class Bike : public Vehicle {
public:
    void gearChange() {
        cout << "Bike gear changed" << endl;
    }
    void speedUp() {
        cout << "Bike speed increased" << endl;
    }
    void applyBrakes() {
        cout << "Bike brakes applied" << endl;
    }
};

class Car : public Vehicle {
public:
    void gearChange() {
        cout << "Car gear changed" << endl;
    }
    void speedUp() {
        cout << "Car speed increased" << endl;
    }
    void applyBrakes() {
        cout << "Car brakes applied" << endl;
    }
};

int main() {
    Vehicle *v;
    
    Bicycle b;
    Bike bk;
    Car c;

    v = &b;
    v->gearChange();
    v->speedUp();
    v->applyBrakes();

    cout << endl;

    v = &bk;
    v->gearChange();
    v->speedUp();
    v->applyBrakes();

    cout << endl;

    v = &c;
    v->gearChange();
    v->speedUp();
    v->applyBrakes();

    return 0;
}