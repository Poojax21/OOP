#include<iostream>
using namespace std;

class Engine{
public:
    void start(){
        cout<<"Engine started"<<endl;
    }
};

class Car{
private:
    Engine e;

public:
    void startCar(){
        cout<<"Car starting"<<endl;
        e.start();
    }
};

int main(){
    Car c;
    c.startCar();
    return 0;
}