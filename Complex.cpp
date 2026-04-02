#include<iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    void input()
    {
        cout<<"Enter real part: ";
        cin>>real;
        cout<<"Enter imaginary part: ";
        cin>>imag;
    }

    Complex operator + (Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator - (Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    Complex operator * (Complex c)
    {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }

    Complex operator / (Complex c)
    {
        Complex temp;

        float denom = (c.real * c.real) + (c.imag * c.imag);

        if(denom == 0)
        {
            cout<<"Division not possible"<<endl;
            temp.real = 0;
            temp.imag = 0;
            return temp;
        }

        temp.real = (real * c.real + imag * c.imag) / denom;
        temp.imag = (imag * c.real - real * c.imag) / denom;

        return temp;
    }

    void display()
    {
        if(imag >= 0)
            cout<<real<<" + "<<imag<<"i"<<endl;
        else
            cout<<real<<" - "<<-imag<<"i"<<endl;
    }
};

int main()
{
    Complex c1, c2;

    cout<<"Enter first complex number:"<<endl;
    c1.input();

    cout<<"Enter second complex number:"<<endl;
    c2.input();

    Complex add, sub, mul, div;

    add = c1 + c2;
    sub = c1 - c2;
    mul = c1 * c2;
    div = c1 / c2;

    cout<<"\nAddition: ";
    add.display();

    cout<<"Subtraction: ";
    sub.display();

    cout<<"Multiplication: ";
    mul.display();

    cout<<"Division: ";
    div.display();

    return 0;
}