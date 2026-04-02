#include <iostream>
using namespace std;

class Shape
{
protected:
    double d1, d2;

public:
    void input()
    {
        cin >> d1 >> d2;
    }

    virtual double compute_area() = 0;
};

class Triangle : public Shape
{
public:
    double compute_area()
    {
        return 0.5 * d1 * d2;
    }
};

class Rectangle : public Shape
{
public:
    double compute_area()
    {
        return d1 * d2;
    }
};

int main()
{
    Shape* s;
    int choice;

    cout << "1 Triangle\n2 Rectangle\n";
    cin >> choice;

    if (choice == 1)
         s = new Triangle();
    else
        s = new Rectangle();

    cout << "Enter dimensions:\n";
    s->input();

    cout << "Area = " << s->compute_area();

    delete s;
}

