#include<iostream>
using namespace std;

class Professor{
public:
    void teach(){
        cout<<"Professor teaching"<<endl;
    }
};

class Department{
public:
    void showDept(){
        cout<<"Department running"<<endl;
    }
};

int main(){
    Department d;
    Professor p;

    d.showDept();
    p.teach();

    return 0;
}
