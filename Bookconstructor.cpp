#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool validName(string s) {
    if (s.length() == 0) return false;
    for (int i = 0; i < s.length(); i++) {
        if (!isalpha(s[i]) && s[i] != ' ')
            return false;
    }
    return true;
}

class Book {
    int b_id;
    string b_name;
    string author;
    float price;

public:
    Book() {
        while (true) {
            cout << "Enter Book ID: ";
            cin >> b_id;
            if (b_id > 0) break;
            cout << "Invalid ID\n";
        }

        cin.ignore();

        while (true) {
            cout << "Enter Book Name: ";
            getline(cin, b_name);
            if (validName(b_name)) break;
            cout << "Invalid Name\n";
        }

        while (true) {
            cout << "Enter Author: ";
            getline(cin, author);
            if (validName(author)) break;
            cout << "Invalid Author\n";
        }

        while (true) {
            cout << "Enter Price: ";
            cin >> price;
            if (price > 0) break;
            cout << "Invalid Price\n";
        }

        cin.ignore();
    }

    void display() {
        cout << "ID: " << b_id << endl;
        cout << "Name: " << b_name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl << endl;
    }

    ~Book() {
        cout << "Book ID " << b_id << " deleted\n";
    }
};

int main() {
    int n;
    while (true) {
        cout << "How many books? ";
        cin >> n;
        if (n > 0) break;
        cout << "Invalid number\n";
    }

    Book* b = new Book[n];

    cout << "\nAll Books:\n";
    for (int i = 0; i < n; i++) {
        cout << "Book " << i + 1 << ":\n";
        b[i].display();
    }

    delete[] b;
    return 0;
}
