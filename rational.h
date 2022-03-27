#pragma once
#include <iostream>
 
// rational.h - Rational number class
 
class Rational {
    friend std::ostream& operator<< (std::ostream& os, const Rational& r);
//  friend Rational operator* (const Rational& lhs, const Rational& rhs);
private:
    int num, den; // Numerator and denominator
    int gcd (int a, int b) const; // Finds GCD of a and b
    void reduce (); // Converts current rational number to reduced form
public:
    // Constructors
    Rational() { num = 0; den = 1; } // Default, 0
    Rational(int n) { num = n; den = 1; }
    Rational(int n, int d) { num = n; den = d; reduce(); }
    Rational(double n) : Rational((int)(n * 10000), 10000) { }
    Rational operator* (const Rational& rhs) const; 
    Rational& operator*= (const Rational& rhs);

    Rational operator- () const { return Rational(-num, den);}
    Rational& operator++ () { num += den; return *this;}
    Rational operator++ (int) ; 
 
    bool operator< (const Rational& rhs) const
        { return num * rhs.den < rhs.num * den; }
    bool operator== (const Rational& rhs) const
        { return num == rhs.num && den == rhs.den; }
    bool operator!= (const Rational& rhs) const
        { return !(*this == rhs); }
    bool operator<= (const Rational& rhs) const
        { return *this < rhs || *this == rhs; }
    bool operator> (const Rational& rhs) const
        { return !(*this <= rhs); }
    bool operator>= (const Rational& rhs) const
        { return !(*this < rhs); }
};