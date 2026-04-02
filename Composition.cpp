#include<iostream>
using namespace std;

class Publication{
public:
    string title;
    float price;
    int copies;

    void getData(){
        cout<<"Enter title ";
        cin>>title;
        cout<<"enter price ";
        cin>>price;
        cout<<"enter copies";

    }

float saleCopy(){
    return price * copies ;
}
};

class Book{
public:
    Publication p;
    string author;
    int order;

    void getBook(){
        p.getData();
        cout<<"Enter author: ";
        cin>>author;
    }

    void orderCopies(){
        cout<<"Enter copies ordered: ";
        cin>>order;
    }

    int showOrder(){
        return order;
    }

    float sales(){
        return p.saleCopy();
    }
};

class Magazine{
public:
    Publication p;
    int order;

    void getMag(){
        p.getData();
    }

    void orderQty(){
        cout<<"Enter quantity ordered: ";
        cin>>order;
    }

    void currentIssue(){
        cout<<"Current issue of "<<p.title<<endl;
    }

    void receiveIssue(){
        cout<<"Issue received"<<endl;
    }

    float sales(){
        return p.saleCopy();
    }
};

int main(){
    Book b;
    Magazine m;

    b.getBook();
    b.orderCopies();

    m.getMag();
    m.orderQty();
    m.currentIssue();
    m.receiveIssue();

    cout<<"Copies ordered for book: "<<b.showOrder()<<endl;

    float total = b.sales() + m.sales();

    cout<<"Total sales of publications: "<<total<<endl;

    return 0;
}