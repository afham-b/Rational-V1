// rational.cpp - Implementations of Rational class member functions
 
#include "rational.h"
#include <cmath>
using namespace std;
 
int Rational::gcd (int a, int b) const {
    int c;
    while (a != 0) {
        c = a;
        a = b % a;
        b = c;
    }
    return b;
}
 
void Rational::reduce () {
    if (num == 0)
        den = 1;
    else {
        if (den < 0) {
            num = -num;
            den = -den;
        }
    }
    int divisor = abs(gcd(num, den));
    num /= divisor;
    den /= divisor;
}
 
std::ostream& operator<< (std::ostream& os, const Rational& r) {
    os << r.num << '/' << r.den;
    return os;
}
 
//Rational operator* (const Rational& lhs, const Rational& rhs) {
//  // Version 1
//  //Rational result;
//  //result.num = lhs.num * rhs.num;
//  //result.den = lhs.den * rhs.den;
//  //result.reduce();
//  //return result;
//
//  // Version 2
//  Rational result(lhs.num * rhs.num, lhs.den * rhs.den);
//  return result;
//
//  // Version 3
//  return Rational(lhs.num * rhs.num, lhs.den * rhs.den);
//}
 
Rational Rational::operator* (const Rational& rhs) const {
    // num = num member of the calling object (left side operand)
    // rhs.num = num member of parameter (right side operand)
    return Rational(num * rhs.num, den * rhs.den);} 


Rational& Rational::operator*= (const Rational& rhs){ 
    num *= rhs.num; 
    den *= rhs.den;
    reduce();
    return *this; 
    }

Rational Rational::operator++ (int) { 
    Rational copy( *this);
    num += den; 
    return copy; 
}