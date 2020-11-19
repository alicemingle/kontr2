#pragma once
#include "Complex_Number.h"

class ComplexNumber;
class ComplexVector {
private:
    int length;
    int numbers;
    ComplexNumber* data;
public:
    ComplexVector();
    ComplexVector(int len);
    ~ComplexVector();
    ComplexVector(const ComplexVector& arg);

    ComplexVector& operator=(const ComplexVector& arg);
    ComplexVector operator+(const ComplexVector& arg);
    ComplexVector operator-(const ComplexVector& arg);
    ComplexVector operator*(const ComplexVector& arg);
    ComplexNumber operator[](int pos);
    void print();
    void append(const ComplexNumber& arg);
    void at_i(int pos, const ComplexNumber& arg);
};
