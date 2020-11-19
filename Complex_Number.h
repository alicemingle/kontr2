#pragma once
#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double re, im;
public:
    ComplexNumber();
    ComplexNumber(double re, double im);
    ComplexNumber operator+(const ComplexNumber& arg);
    ComplexNumber operator-(const ComplexNumber& arg);
    ComplexNumber operator*(const ComplexNumber& arg);
    bool operator==(const ComplexNumber& arg);
    friend ostream& operator<<(ostream& stream, const ComplexNumber& arg);
};
