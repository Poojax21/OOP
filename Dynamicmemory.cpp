#include<iostream>
#include<cctype>
using namespace std;

class Book{
    string name;
    string author;
    float price;

    bool valid(string s){
        if(s.size()==0) return false;
        for(int i=0;i<s.size();i++){
            if(!isalpha(s[i]) && s[i]!=' ') return false;
        }
        return true;
    }

    void getName(){
        cout<<"Enter book name: ";
        while(true){
            getline(cin,name);
            if(valid(name)) break;
            cout<<"Invalid name, enter again: ";
        }
    }

    void getAuthor(){
        cout<<"Enter author: ";
        while(true){
            getline(cin,author);
            if(valid(author)) break;
            cout<<"Invalid author, enter again: ";
        }
    }

    void getPrice(){
        cout<<"Enter price: ";
        while(!(cin>>price) || price<=0){
            cout<<"Invalid price, enter again: ";
            cin.clear();
            cin.ignore(1000,'\n');
        }
        cin.ignore();
    }

public:
    void input(){
        getName();
        getAuthor();
        getPrice();
    }

    void show(){
        cout<<"Book: "<<name<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    cin.ignore();

    Book *b = new Book[n];

    for(int i=0;i<n;i++){
        cout<<"Enter details of book "<<i+1<<endl;
        b[i].input();
    }

    cout<<"Book details:"<<endl;

    for(int i=0;i<n;i++){
        b[i].show();
        cout<<endl;
    }

    delete[] b;

    return 0;
}