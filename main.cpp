#include "Complex_Vector.h"
#include "Autotest.h"

int main(void)
{
    int test_res = Autotest();
    if (test_res == 0)
    {
        cout << "Autotest not passed." << endl;
        exit(-1);
    }
    if (test_res == 1)
    {
        cout << "Autotest passed." << endl;
    }

    ComplexNumber a1(1,3), a2(2,3), a3(3,3);
    ComplexNumber b1(4,1), b2(4,2), b3(4,3);

    ComplexVector V1(3), V2(3);
    V1.append(a1); V1.append(a2); V1.append(a3);
    V2.append(b1); V2.append(b2); V2.append(b3);

    V1.print();
    cout << " -- -- -- -- " << endl;
    V2.print();
    cout << " -- -- -- -- " << endl;
    ComplexVector V3 = V1 + V2;
    V3.print();
    cout << " -- -- -- -- " << endl;
    ComplexVector V4 = V1 - V3;
    V4.print();
    cout << " -- -- -- -- " << endl;
    ComplexVector V5 = V1 * V2;
    V5.print();
    cout << " -- -- -- -- " << endl;
    // Место в векторе закончилось. Добавим элемент.
    ComplexNumber app(228, 47);
    V5.append(app);
    V5.print();

    return 0;
}
