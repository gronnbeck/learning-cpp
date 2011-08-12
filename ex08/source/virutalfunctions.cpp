//
//  virutalfunctions.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "ex08.h"
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"

using namespace std;

namespace ex08 {
    
    void virtualfunctions()
    {
        Shape s1("red", "dotted");
        cout << "s1: " << s1.toString() << endl;
        Rectangle r1("blue", "solid", 6, 6);
        cout << "r1: " << r1.toString() << endl;
        Shape s2 = r1;
        cout << "s2: " << s2.toString() << endl;
        Shape *ps1 = new Shape("green", "dotted");
        cout << "ps1: " << ps1->toString() << endl;
        Rectangle *pr1 = new Rectangle("yellow", "solid", 5, 5);
        cout << "pr1: " << pr1->toString() << endl;
        Shape *ps2 = pr1;
        cout << "ps2: " << ps2->toString() << endl;
    }
}