//
//  square.h
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Ovinger_C___square_h
#define Ovinger_C___square_h

#include "rectangle.h"

using namespace std;

namespace ex08 {
    
    class Square : public Rectangle 
    {
    public:
        Square(string color, string line, double sideLength) : Rectangle(color, line, sideLength, sideLength) { }
        
        string  toString            ();
        string  getName             ();
    };
}


#endif
