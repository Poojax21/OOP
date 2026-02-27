#include<iostream>
using namespace std;

class Student{
    string name;
    float percentage;
public:
    void input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter percentage: ";
        cin>>percentage;
    }

    friend void comparePercentage(Student, Student);
};

void comparePercentage(Student s1, Student s2){
    if(s1.percentage > s2.percentage)
        cout<<"Higher percentage: "<<s1.name<<" "<<s1.percentage;
    else if(s2.percentage > s1.percentage)
        cout<<"Higher percentage: "<<s2.name<<" "<<s2.percentage;
    else
        cout<<"Both have same percentage";
}

int main(){
    Student s1,s2;
    s1.input();
    s2.input();
    comparePercentage(s1,s2);
}