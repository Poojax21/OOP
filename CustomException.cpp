#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class InvalidBookException {
public:
    string message;
    InvalidBookException(string msg) { message = msg; }
};

class Book {
public:
    int b_id;
    string title, author;
    double price;

    Book(int id, string t, string a, double p) {
        if (id <= 0) throw InvalidBookException("ID must be positive!");
        
        if (t == "") throw InvalidBookException("Title is empty!");
        for (char c : t) if (isdigit(c)) throw InvalidBookException("Title cannot have numbers!");

        if (a == "") throw InvalidBookException("Author is empty!");
        for (char c : a) if (isdigit(c)) throw InvalidBookException("Author cannot have numbers!");

        if (p <= 0) throw InvalidBookException("Price must be positive!");

        b_id = id; title = t; author = a; price = p;
    }
};

int main() {
    int total;
    cout << "Enter number of books: ";
    while (!(cin >> total)) {
        cout << "Please enter a valid number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    for (int i = 0; i < total; i++) {
        bool success = false;
        while (!success) {
            try {
                int id;
                string t, a;
                double p;

                cout << "\n--- Book " << i + 1 << " ---" << endl;
                
                cout << "Enter ID: ";
                if (!(cin >> id)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    throw InvalidBookException("ID must be a number!");
                }
                cin.ignore(1000, '\n'); // Clear buffer after ID

                cout << "Enter Title: ";
                getline(cin, t);

                cout << "Enter Author: ";
                getline(cin, a);

                cout << "Enter Price: ";
                if (!(cin >> p)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    throw InvalidBookException("Price must be a number!");
                }

                Book b(id, t, a, p);
                cout << ">> Success! Book added." << endl;
                success = true;
            }
            catch (InvalidBookException e) {
                cout << ">> ERROR: " << e.message << " Try again." << endl;
            }
        }
    }
    return 0;
}