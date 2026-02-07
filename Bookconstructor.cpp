#include <iostream>
using namespace std;

class Book {
public:
    int bookID;
    string bookName;
    string author;
    float price;

    Book() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
        cin.ignore();

        cout << "\nBook object created successfully!\n\n";
    }

    void display() {
        cout << "Book Details:\n";
        cout << "ID: " << bookID << "\n";
        cout << "Name: " << bookName << "\n";
        cout << "Author: " << author << "\n";
        cout << "Price: $" << price << "\n\n";
    }

    ~Book() {
        cout << "Book object with ID " << bookID << " is being destroyed.\n";
    }
};

int main() {
    int n;
    cout << "How many books do you want to enter? ";
    cin >> n;
    cin.ignore();

    
    Book* books = new Book[n];

    cout << "\nDisplaying all book details:\n";
    for (int i = 0; i < n; i++) {
        cout << "Book " << i + 1 << ":\n";
        books[i].display();
    }

    
    delete[] books;

    return 0;
}
