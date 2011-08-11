//
//  Rational.h
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Ovinger_C___Rational_h
#define Ovinger_C___Rational_h

#include <iostream>
#include <cstdlib>

using namespace std;


namespace ex05 {
    
    class Rational {

    public:
        Rational(long numerator, long denominator);
        Rational();
        
        long getNumerator();
        long getDenominator();
        long gcd();
        void simplify();
        
        Rational operator ++(int);
        Rational operator ++();
        
        friend ostream& operator <<(ostream& outputStream, Rational);
        friend istream& operator >>(istream& inputStream, Rational&);

    private:
        long numerator;
        long denominator;
    };
    
    Rational getSimplifiedCopy(const Rational& r);
    
    bool operator ==(const Rational& rational1, const Rational& rational2);
    bool operator !=(const Rational& r1, const Rational& r2);
    
    bool operator >(const Rational& r1, const Rational& r2);
    bool operator <(const Rational& r1, const Rational& r2);
    
    bool operator <=(const Rational& r1, const Rational& r2);
    
}

#endif
