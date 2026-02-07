#include <iostream>
using namespace std;

class ExamSession {
public:
    int *a;
    int n;

    ExamSession(int x) {
        n = x;
        a = new int[n];
        cout << "Constructor called\n";
        for(int i = 0; i < n; i++) {
            cout << "Ans " << i+1 << ": ";
            cin >> a[i];
            
        }
    }

    ~ExamSession() {
        delete[] a;
        cout << "Destructor called\n";
    }

    void show() {
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main() {
    int s, q;

   
    do {
        cout << "Students: ";
        cin >> s;

        if (cin.fail() || s <= 0) {
            cout << "Invalid input. Enter a positive number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (s <= 0);

    
    do {
        cout << "Questions: ";
        cin >> q;

        if (cin.fail() || q <= 0) {
            cout << "Invalid input. Enter a positive number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (q <= 0);

    ExamSession* e[10];   

    for(int i = 0; i < s; i++) {
        cout << "Student " << i+1 << endl;
        e[i] = new ExamSession(q);
    }

    for(int i = 0; i < s; i++) {
        cout << "Student " << i+1 << ": ";
        e[i]->show();
    }

    for(int i = s-1; i >= 0; i--)
        delete e[i];

    return 0;
}



// #include <iostream>
// using namespace std;

// class ExamSession {
// public:
//     int *a;
//     int n;

//     ExamSession() {
//         cout << "Default constructor called\n";
//         a = NULL;
//         n = 0;
//     }

//     ExamSession(int x) {
//         n = x;
//         a = new int[n];
//         cout << "Constructor called\n";
//     }

//     ~ExamSession() {
//         delete[] a;
//         cout << "Destructor called\n";
//     }
// };

// int main() {
//     ExamSession e[3];
//     return 0;
// }
