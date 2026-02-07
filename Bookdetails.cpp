// #include <iostream>
// #include <iomanip>
// using namespace std;

// class Book {
// public:
//     int bookid;
//     string bookname;
//     string author;
//     float price;

//     void getBookInfo() {
//         cout << "Enter Book ID : ";
//         cin >> bookid;
//         while (bookid <= 0) {
//             cout << "Invalid , Book ID must be positive." << endl;
//             cout << "Enter Book : ";
//             cin >> bookid;
//         }

//         cin.ignore();
//         cout << "Enter Book Name: ";
//         getline(cin, bookname);
//         while (bookname.empty()) {
//             cout << "Invalid , Book Name cannot be empty" << endl;
//             cout << "Enter Book Name: ";
//             getline(cin, bookname);
//         }

//         cout << "Enter Author Name: ";
//         getline(cin, author);
//         while (author.empty()) {
//             cout << "Invalid , Author Name cannot be empty." << endl;
//             cout << "Enter Author Name: ";
//             getline(cin, author);
//         }

//         cout << "Enter Price";
//         cin >> price;
//         while (price <= 0) {
//             cout << "Invalid, Price must be greater than 0" << endl;
//             cout << "Enter Price :";
//             cin >> price;
//         }
//     }

//     void printDetails() {
//         cout << left
//              << setw(10) << bookid
//              << setw(15) << bookname
//              << setw(15) << author
//              << fixed << setprecision(2)
//              << setw(10) << price << endl;
//     }
// };

// int main() {
//     int n;
//     float totalPrice = 0;

//     cout << "Enter number of books: ";
//     cin >> n;
//     while (n <= 0) {
//         cout << "Invalid! Number of books must be greater than 0." << endl;
//         cout << "Enter number of books : ";
//         cin >> n;
//     }

//     Book b[n];

//     for (int i = 0; i < n; i++) {
//         cout << "\nEnter details of book " << i + 1 << endl;
//         b[i].getBookInfo();
//         totalPrice += b[i].price;
//     }

//     cout << "\n----------------------------------------------------" << endl;
//     cout << left
//          << setw(10) << "BookID"
//          << setw(15) << "BookName"
//          << setw(15) << "Author"
//          << setw(10) << "Price" << endl;
//     cout << "----------------------------------------------------" << endl;

//     for (int i = 0; i < n; i++) {
//         b[i].printDetails();
//     }

//     cout << "----------------------------------------------------" << endl;
//     cout << "Total Price: " << fixed << setprecision(2) << totalPrice << endl;

//     return 0;
// }


#include <iostream>
#include <iomanip>
using namespace std;

class Book {
public:
    int bookid;
    string bookname;
    string author;
    float price;

    void getBookInfo() {
        cout << "Enter Book ID : ";
        cin >> bookid;
        while (cin.fail() || bookid <= 0) {
            cin.clear();
            cin.ignore( '\n');
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

int main() {
    int n;
    float totalPrice = 0;

    cout << "Enter number of books: ";
    cin >> n;
    while (cin.fail() || n <= 0) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid! Enter number of books: ";
        cin >> n;
    }

    Book b[10];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of book " << i + 1 << endl;
        b[i].getBookInfo();
        totalPrice += b[i].price;
    }

    cout << "\n------------------------------------------------------" << endl;
    cout << left
         << setw(5) << "ID"
         << setw(15) << "Name"
         << setw(15) << "Author"
         << setw(10) << "Price" << endl;
    cout << "------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        b[i].printDetails();
    }

    cout << "------------------------------------------------------" << endl;
    cout << "Total Price: " << fixed << setprecision(2) << totalPrice << endl;

    return 0;
}
