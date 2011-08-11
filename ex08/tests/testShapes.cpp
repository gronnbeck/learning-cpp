//
//  testCircle.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "circle.h"
#include "rectangle.h"
#include "shape.h"
#include "ex08.h"

using namespace std;

namespace ex08 {
    
    // Not tested the set-methods... 
    
    void testCircle()
    {
        Circle circle = Circle("blue", "solid", 3);
        cout << circle.getColor() << endl;
        cout << circle.getLine() << endl;
        cout << circle.getCircumference() << endl;
        cout << circle.getArea() << endl;
    }
    
    void testRectangle()
    {
        Rectangle rect = Rectangle("green", "dotted", 10, 5);
        cout << rect.getColor() << endl;
        cout << rect.getLine() << endl;
        cout << rect.getHeight() << endl;
        cout << rect.getWidth() << endl;
        cout << rect.getCircumference() << endl;
        cout << rect.getArea() << endl;
    }
}
