#include <iostream>
using namespace std;

class Employee{
public:
    string Emp_name;
    int Emp_id;
    string Address;
    string Mail_id;
    long long Mobile_no;
};

class Programmer : public Employee{
public:
    float BP;

    void get(){
        cout<<"Enter Name: ";
        cin>>Emp_name;

        while(true){
            cout<<"Enter ID: ";
            cin>>Emp_id;
            if(Emp_id>0) break;
        }

        cout<<"Enter Address: ";
        cin>>Address;

        cout<<"Enter Mail: ";
        cin>>Mail_id;

        while(true){
            cout<<"Enter Mobile: ";
            cin>>Mobile_no;
            if(Mobile_no>=1000000000 && Mobile_no<=9999999999) break;
        }

        while(true){
            cout<<"Enter Basic Pay: ";
            cin>>BP;
            if(BP>0) break;
        }
    }

    void payslip(){
        float DA=0.52*BP;
        float HRA=0.27*BP;
        float PF=0.12*BP;
        float staff=0.001*BP;
        float gross=BP+DA+HRA;
        float net=gross-PF-staff;

        cout<<"\nPay Slip\n";
        cout<<"Name: "<<Emp_name<<endl;
        cout<<"ID: "<<Emp_id<<endl;
        cout<<"Basic Pay: "<<BP<<endl;
        cout<<"DA: "<<DA<<endl;
        cout<<"HRA: "<<HRA<<endl;
        cout<<"PF: "<<PF<<endl;
        cout<<"Staff Fund: "<<staff<<endl;
        cout<<"Gross Salary: "<<gross<<endl;
        cout<<"Net Salary: "<<net<<endl;
    }
};

class TeamLead : public Employee{
public:
    float BP;

    void get(){
        cout<<"Enter Name: ";
        cin>>Emp_name;

        while(true){
            cout<<"Enter ID: ";
            cin>>Emp_id;
            if(Emp_id>0) break;
        }

        cout<<"Enter Address: ";
        cin>>Address;

        cout<<"Enter Mail: ";
        cin>>Mail_id;

        while(true){
            cout<<"Enter Mobile: ";
            cin>>Mobile_no;
            if(Mobile_no>=1000000000 && Mobile_no<=9999999999) break;
        }

        while(true){
            cout<<"Enter Basic Pay: ";
            cin>>BP;
            if(BP>0) break;
        }
    }

    void payslip(){
        float DA=0.52*BP;
        float HRA=0.27*BP;
        float PF=0.12*BP;
        float staff=0.001*BP;
        float gross=BP+DA+HRA;
        float net=gross-PF-staff;

        cout<<"\nPay Slip\n";
        cout<<"Name: "<<Emp_name<<endl;
        cout<<"ID: "<<Emp_id<<endl;
        cout<<"Basic Pay: "<<BP<<endl;
        cout<<"DA: "<<DA<<endl;
        cout<<"HRA: "<<HRA<<endl;
        cout<<"PF: "<<PF<<endl;
        cout<<"Staff Fund: "<<staff<<endl;
        cout<<"Gross Salary: "<<gross<<endl;
        cout<<"Net Salary: "<<net<<endl;
    }
};

class AssistantProjectManager : public Employee{
public:
    float BP;

    void get(){
        cout<<"Enter Name: ";
        cin>>Emp_name;

        while(true){
            cout<<"Enter ID: ";
            cin>>Emp_id;
            if(Emp_id>0) break;
        }

        cout<<"Enter Address: ";
        cin>>Address;

        cout<<"Enter Mail: ";
        cin>>Mail_id;

        while(true){
            cout<<"Enter Mobile: ";
            cin>>Mobile_no;
            if(Mobile_no>=1000000000 && Mobile_no<=9999999999) break;
        }

        while(true){
            cout<<"Enter Basic Pay: ";
            cin>>BP;
            if(BP>0) break;
        }
    }

    void payslip(){
        float DA=0.52*BP;
        float HRA=0.27*BP;
        float PF=0.12*BP;
        float staff=0.001*BP;
        float gross=BP+DA+HRA;
        float net=gross-PF-staff;

        cout<<"\nPay Slip\n";
        cout<<"Name: "<<Emp_name<<endl;
        cout<<"ID: "<<Emp_id<<endl;
        cout<<"Basic Pay: "<<BP<<endl;
        cout<<"DA: "<<DA<<endl;
        cout<<"HRA: "<<HRA<<endl;
        cout<<"PF: "<<PF<<endl;
        cout<<"Staff Fund: "<<staff<<endl;
        cout<<"Gross Salary: "<<gross<<endl;
        cout<<"Net Salary: "<<net<<endl;
    }
};

class ProjectManager : public Employee{
public:
    float BP;

    void get(){
        cout<<"Enter Name: ";
        cin>>Emp_name;

        while(true){
            cout<<"Enter ID: ";
            cin>>Emp_id;
            if(Emp_id>0) break;
        }

        cout<<"Enter Address: ";
        cin>>Address;

        cout<<"Enter Mail: ";
        cin>>Mail_id;

        while(true){
            cout<<"Enter Mobile: ";
            cin>>Mobile_no;
            if(Mobile_no>=1000000000 && Mobile_no<=9999999999) break;
        }

        while(true){
            cout<<"Enter Basic Pay: ";
            cin>>BP;
            if(BP>0) break;
        }
    }

    void payslip(){
        float DA=0.52*BP;
        float HRA=0.27*BP;
        float PF=0.12*BP;
        float staff=0.001*BP;
        float gross=BP+DA+HRA;
        float net=gross-PF-staff;

        cout<<"\nPay Slip\n";
        cout<<"Name: "<<Emp_name<<endl;
        cout<<"ID: "<<Emp_id<<endl;
        cout<<"Basic Pay: "<<BP<<endl;
        cout<<"DA: "<<DA<<endl;
        cout<<"HRA: "<<HRA<<endl;
        cout<<"PF: "<<PF<<endl;
        cout<<"Staff Fund: "<<staff<<endl;
        cout<<"Gross Salary: "<<gross<<endl;
        cout<<"Net Salary: "<<net<<endl;
    }
};

int main(){
    Programmer p;
    TeamLead t;
    AssistantProjectManager a;
    ProjectManager m;

    cout<<"\nProgrammer Details\n";
    p.get();
    p.payslip();

    cout<<"\nTeamLead Details\n";
    t.get();
    t.payslip();

    cout<<"\nAssistant Project Manager Details\n";
    a.get();
    a.payslip();

    cout<<"\nProject Manager Details\n";
    m.get();
    m.payslip();

    return 0;
}