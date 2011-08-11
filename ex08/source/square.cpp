//
//  square.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <sstream>
#include "square.h"
#include "rectangle.h"

using namespace std;

namespace ex08 {
    
    string Square::toString()
    {
        stringstream ss;
        ss << Shape::toString() << ", Side Length = " << getWidth() << ", Circumference = " << getCircumference() << ", Area = " << getArea();
        return ss.str();
    }
}