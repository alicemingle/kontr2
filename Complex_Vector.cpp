#include "Complex_Vector.h"

ComplexVector::ComplexVector() {
    length = 0;
    numbers = 0;
    data = nullptr;
}
ComplexVector::ComplexVector(int len) {
    length = len;
    numbers = 0;
    data = new ComplexNumber[len];
}
ComplexVector::~ComplexVector() {
    delete[] data;
}
ComplexVector::ComplexVector(const ComplexVector& arg) {
    length = arg.length;
    numbers = arg.numbers;
    data = new ComplexNumber[length];
    for (int i = 0; i < numbers; ++i) {
        data[i] = arg.data[i];
    }
}

ComplexVector& ComplexVector::operator=(const ComplexVector& arg) {
    length = arg.length;
    numbers = arg.numbers;
    delete[] data;
    data = new ComplexNumber[length];
    for (int i = 0; i < numbers; ++i) {
        data[i] = arg.data[i];
    }
    return *this;
}
ComplexVector ComplexVector::operator+(const ComplexVector& arg) {
    ComplexVector result = *this;
    if (numbers != arg.numbers) {
        cout << "Error: vectors have different dimensions." << endl;
        return result;
    }
    for (int i = 0; i < numbers; ++i) {
        result.data[i] = result.data[i] + arg.data[i];
    }
    return result;
}
ComplexVector ComplexVector::operator-(const ComplexVector& arg) {
    ComplexVector result = *this;
    if (numbers != arg.numbers) {
        cout << "Error: vectors have different dimensions." << endl;
        return result;
    }
    for (int i = 0; i < numbers; ++i) {
        result.data[i] = result.data[i] - arg.data[i];
    }
    return result;
}
ComplexVector ComplexVector::operator*(const ComplexVector& arg) {
    ComplexVector result = *this;
    if (numbers != arg.numbers) {
        cout << "Error: vectors have different dimensions." << endl;
        return result;
    }
    for (int i = 0; i < numbers; ++i) {
        result.data[i] = result.data[i] * arg.data[i];
    }
    return result;
}
ComplexNumber ComplexVector::operator[](int pos) {
    ComplexNumber result;
    if (pos >= numbers || pos < 0) {
        cout << "Error: incorrect position." << endl;
    } else {
        result = data[pos];
    }
    return result;
}
void ComplexVector::print() {
    if (numbers == 0) {
        cout << "Error: nothing to print." << endl;
    } else {
        cout << "(";
        for (int i = 0; i < numbers - 1; ++i) {
            cout << data[i] << ", ";
        }
        cout << data[numbers - 1] << ")" << endl;;
    }
}
void ComplexVector::append(const ComplexNumber& arg) {
    if (numbers < length) {
        data[numbers] = arg;
        numbers++;
    } else {
        ComplexNumber* tmp = new ComplexNumber[numbers];
        for (int i = 0; i < numbers; ++i) {
            tmp[i] = data[i];
        }
        delete[] data;
        data = new ComplexNumber[2*numbers];
        length = 2*numbers;
        for (int i = 0; i < numbers; ++i) {
            data[i] = tmp[i];
        }
        delete[] tmp;
        data[numbers] = arg;
        numbers++;
    }
}
void ComplexVector::at_i(int pos, const ComplexNumber& arg) {
    if (pos >= number || pos < 0) {
        cout << "Error: incorrect index." << endl;
    } else {
        data[pos] = arg;
    }
}
