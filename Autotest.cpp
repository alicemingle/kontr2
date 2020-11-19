#include "Autotest.h"

int Autotest() {
    ComplexNumber a1(1,1), a2(2,2);
    ComplexNumber b1(2,2), b2(3,3);

    ComplexVector v1(2), v2(2);
    v1.append(a1); v1.append(a2);
    v2.append(b1); v2.append(b2);

    ComplexVector t = v1 + v2;
    if (t[0] == b2) {
        return 1;
    }
    return 0;
}
