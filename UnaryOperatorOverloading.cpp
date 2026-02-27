#include<iostream>
using namespace std;

class Num{
    int x;
public:
    Num(int a=0){
        x=a;
    }

    Num operator-(){
        Num temp;
        temp.x = -x;
        return temp;
    }

    void show(){
        cout<<x;
    }
};

int main(){
    Num n1(10);
    Num n2 = -n1;
    n2.show();
}