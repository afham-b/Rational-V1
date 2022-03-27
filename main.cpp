#include "rational.h"
#include <iostream>
using namespace std;
 
int main () {
    Rational r1;
    Rational r2(3);
    Rational r3(24, 9);
    Rational r4(1.25);
 
    // Requires operator overloads for <<...
    //cout << r1 << " " << r2 << " " << r3 << " " << r4 << endl;
    //cout << (r2 < r3) << endl;
    //cout << (r3 < r2) << endl;
    //if (r2 < r3)
    //    cout << "r2<r3" << endl;
    //if (r3 < r2)
    //    cout << "r3<r2" << endl;
 
    // Requires operator overloads for *, /
    //cout << r2 * r3 << " " << r2 / r3 << endl;
    cout << (r2 *= r3) << endl;
 
    // Requires operator overloads for +, -
    //cout << r2 + r4 << " " << r2 - r4 << endl;
 
    // Requires operator overloads for +=, -=, *=, /=
    //Rational r5(1, 2);
    //r1 += r5;
    //r2 -= r5;
    //r3 *= r5;
    //r4 /= r5;
   ++r4; 
   cout << r1 << " " << r2 << " " << r3 << " " << r4 << endl;
   cout << (r2 *= r3) << endl; 
 
    // Relational operators
    //if (r1 < r2) cout << "r1 < r2" << endl;
    //if (r1 > r2) cout << "r1 > r2" << endl;
    //if (r1 == r2) cout << "r1 == r2" << endl;
    //if (r1 != r2) cout << "r1 != r2" << endl;
    //if (r1 <= r2) cout << "r1 <= r2" << endl;
    //if (r1 >= r2) cout << "r1 >= r2" << endl;
 
    // Unary minus
    //r4 = -r4;
    //cout << r4 << endl;
 
    // Pre- and post-increment
    //r3 += ++r1;
    //r4 += r1++;
    // cout << r1 << " " << r2 << " " << r3 << " " << r4 << endl;
#ifdef _MSC_VER
    system("pause");
#endif
    return 0;
}