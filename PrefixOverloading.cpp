#include<iostream>
using namespace std;

class Count{
    int x;
public:
    Count(int a=0){
        x=a;
    }

    Count& operator++(){
        ++x;
        return *this;
    }

    void show(){
        cout<<x;
    }
};

int main(){
    Count c(5);
    ++c;
    c.show();
}