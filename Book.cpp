#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

class Book {
public:
    int bookid;
    string bookname;
    string author;
    float price;

    static int totalBooks;   

    void getBookInfo() {
        cout << "Enter Book ID : ";
        cin >> bookid;
        while (cin.fail() || bookid <= 0) {
           // cin.clear();
            cin.ignore();
            cout << "Invalid! Enter Book ID : ";
            cin >> bookid;
        }

        cin.ignore();
        cout << "Enter Book Name: ";
        getline(cin, bookname);
        while (bookname == "") {
            cout << "Invalid! Enter Book Name: ";
            getline(cin, bookname);
        }

        cout << "Enter Author Name: ";
        getline(cin, author);
        while (author == "") {
            cout << "Invalid! Enter Author Name: ";
            getline(cin, author);
        }

        cout << "Enter Price: ";
        cin >> price;
        while (cin.fail() || price <= 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid! Enter Price: ";
            cin >> price;
        }

        totalBooks++;   
    }

    void printDetails() {
        cout << left
             << setw(5) << bookid
             << setw(15) << bookname
             << setw(15) << author
             << fixed << setprecision(2)
             << setw(10) << price << endl;
    }
};


int Book::totalBooks = 0;

int main() {
    Book b[10];
    int count = 0;
    float totalPrice = 0;
    char ch;

    cout << "Press ESC anytime to stop entering books\n";

    while (count < 10) {
        cout << "\nEnter details of book " << count + 1 << endl;
        b[count].getBookInfo();

        totalPrice += b[count].price;
        count++;

        cout << "\nPress ESC to stop OR any other key to continue...";
        ch = _getch();

        if (ch == 27) {
            break;
        }
    }

    cout << "\n------------------------------------------------------" << endl;
    cout << left
         << setw(5) << "ID"
         << setw(15) << "Name"
         << setw(15) << "Author"
         << setw(10) << "Price" << endl;
    cout << "------------------------------------------------------" << endl;

    for (int i = 0; i < count; i++) {
        b[i].printDetails();
    }

    cout << "------------------------------------------------------" << endl;
    cout << "Total Price: " << fixed << setprecision(2) << totalPrice << endl;
    cout << "Total Books Entered: " << Book::totalBooks << endl;

    return 0;
}

