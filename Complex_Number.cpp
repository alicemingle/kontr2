#include "Complex_Number.h"

ComplexNumber::ComplexNumber() {
    re = 0.0;
    im = 0.0;
}

ComplexNumber::ComplexNumber(double re, double im) {
    this->re = re;
    this->im = im;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& arg) {
    ComplexNumber result(this->re, this->im);
    result.re += arg.re;
    result.im += arg.im;
    return result;
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& arg) {
    ComplexNumber result(this->re, this->im);
    result.re -= arg.re;
    result.im -= arg.im;
    return result;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& arg) {
    ComplexNumber result(this->re * arg.re - this->im * arg.im, this->im * arg.re + this->re * arg.im);
    return result;
}

bool ComplexNumber::operator==(const ComplexNumber& arg) {
    if (re == arg.re && im == arg.im) {
        return true;
    }
    return false;
}

ostream& operator<<(ostream& stream, const ComplexNumber& arg) {
    cout << arg.re << " + " << arg.im << "*i";
    return stream;
}

