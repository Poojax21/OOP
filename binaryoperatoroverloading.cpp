#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator-(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    Complex operator*(Complex c) {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2;

    cout << "Addition: ";
    c3.display();

    cout << "Subtraction: ";
    c4.display();

    cout << "Multiplication: ";
    c5.display();

    return 0;
}


#include<iostream>
using namespace std;

class Complex{
    float real ; 
    float imag;


    public:
        Complex (){
            real =0 ; 
            imag  = 0; 
        }

        Complex(float r , float i ){
            real = r; 
            imag = i; 
        }

        Complex 
};
