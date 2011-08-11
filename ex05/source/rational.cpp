//
//  rational.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "Rational.h"

#include <iostream>
#include <cmath>

namespace ex05 {
    
    Rational::Rational(long numer, long denom)
    {
        numerator = numer;
        denominator = denom;
    }
    
    Rational::Rational()
    {
        numerator = 0;
        denominator = 1;
    }
    
    long Rational::getNumerator()
    {
        return numerator;
    }
    
    long Rational::getDenominator()
    {
        return denominator;
    }
    
    long Rational::gcd()
    {
        int a = abs(numerator);
        int b = abs(denominator);
        
        while (b != 0)
        {
            int t = b;
            b = a % b;
            a = t;
        }
        
        return a;
    }
    
    void Rational::simplify()
    {
        long divideWith = gcd();
        numerator = numerator / divideWith;
        denominator = denominator / divideWith;
    }
    
    Rational getSimplifiedCopy(const Rational& rational)
    {
        Rational simplified = rational;
        simplified.simplify();
        
        return simplified;
    }
    
    Rational Rational::operator++(int dummy)
    {
        Rational toReturn = Rational(numerator, denominator);
        numerator = numerator + denominator;
        return toReturn;
        
    }
    
    Rational Rational::operator++()
    {
        numerator = numerator + denominator;
        return Rational(numerator + denominator, denominator);
        
    }
    
    ostream& operator <<(ostream& outputStream, Rational r)
    {
        outputStream << r.numerator << "/" << r.denominator;
        return outputStream;
    }
    
    istream& operator >>(istream& inputStream, Rational& r)
    {
        long num;
        inputStream >> num;
        r.numerator = num;
        
        char split;
        inputStream >> split;
        if (split != '/') 
        {
            cout << "Invalid Rational number";
            exit(1);
        }
        
        long denom;
        inputStream >> denom;
        r.denominator = denom;
        
        return inputStream;
    }
    
    
    
    bool operator ==(const Rational& rational1, const Rational& rational2)
    {
        Rational simplified1 = getSimplifiedCopy(rational1);
        
        Rational simplified2 = getSimplifiedCopy(rational2);
        
        bool hasSameNumerator = simplified1.getNumerator() == simplified2.getNumerator();
        bool hasSameDenominator = simplified2.getDenominator() == simplified2.getDenominator();
        
        return hasSameNumerator && hasSameDenominator;

    }
    
    bool operator !=(const Rational& rational1, const Rational& rational2)
    {
        return !(rational1 == rational2);
    }
    
    bool operator >(const Rational& rational1, const Rational& rational2)
    {
        Rational simplified1 = getSimplifiedCopy(rational1);
        Rational simplified2 = getSimplifiedCopy(rational2);
        
        Rational equalDenom1 = Rational(simplified1.getNumerator() * simplified2.getDenominator(), 
                                       simplified1.getDenominator() * simplified2.getDenominator());
        
        Rational equalDenom2 = Rational(simplified2.getNumerator() * simplified1.getDenominator(),
                                         simplified2.getDenominator() * simplified1.getDenominator());
        
        return equalDenom1.getNumerator() > equalDenom2.getNumerator();
    }
    
    bool operator <(const Rational& r1, const Rational& r2)
    {
        return !(r1 > r2 || r1 == r2);
    }
    
    bool operator <=(const Rational& r1, const Rational& r2)
    {
        return (r1 < r2 && r1 == r2);
    }
    
    
    
    
}
