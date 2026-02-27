#include<iostream>
using namespace std;

class Student{
    int roll;
    string name;
    float m1,m2,m3,m4,m5;
    float percentage;
    string division;

public:
    Student(int r,string n,float a,float b,float c,float d,float e){
        roll=r;
        name=n;
        m1=a; m2=b; m3=c; m4=d; m5=e;
        percentage=0;
        division="";
    }

    ~Student(){}

    void calc(){
        percentage=(m1+m2+m3+m4+m5)/5.0;
    }

    void result(){
        if(percentage>=60) division="First";
        else if(percentage>=50) division="Second";
        else if(percentage>=40) division="Third";
        else division="Fail";
    }

    void show(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Percentage: "<<percentage<<endl;
        cout<<"Division: "<<division<<endl;
    }
};

int main(){
    int r;
    string n;
    float a,b,c,d,e;

    cout<<"Enter roll: ";
    cin>>r;
    cout<<"Enter name: ";
    cin>>n;
    cout<<"Enter marks of 5 subjects: ";
    cin>>a>>b>>c>>d>>e;

    Student s(r,n,a,b,c,d,e);
    s.calc();
    s.result();
    s.show();
}