//
//  rational.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//


#include "Rational.h"
#include <iostream>
#include <cstdlib>
#include "restRational.h"

using namespace std;

namespace ex05 {
    
    
    void testRationalGetNominatorAndDenominator() 
    {
        long currentNumerator = 1;
        long currentDenominator = 2;
        Rational rational = Rational(currentNumerator, currentDenominator);
        
        cout << "(Numerator, Denominator) should be (";
        cout << currentNumerator << ", " << currentDenominator << ") ";
        cout << "and was (";
        cout << rational.getNumerator() << ", " << rational.getDenominator() << ")." << endl;
        return;
        
    }
    
    void testSimplify()
    {
        Rational r = Rational(2,4);
        r.simplify();
        cout << "Should be (1,2) and was (" << r.getNumerator() << ", " << r.getDenominator() << ").";
    }
    
    void testOperatorOverloading()
    {
        Rational r1 = Rational(1,2);
        Rational r2 = Rational(2,4);
        
        if (r1 == r2);
        else 
            cout << "Something wrong with the == overloader";
        
        if (r1 != r2)
            cout << "Something wrong with the != overloader";
        
        r1 = Rational(3,4);
        
        if (r1 > r2);
        else
            cout << "Something wrong with the > overloader";
        
        r1++;
        
        if(r1 != Rational(7,4))
            cout << "Something wrong with the postfix++ operator";
        
        cout << r1 << endl;
        
        cin >> r1;
        cout << r1 << endl;
        
        
    }
    
    
}