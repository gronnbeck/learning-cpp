//
//  circle.h
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Ovinger_C___circle_h
#define Ovinger_C___circle_h

#include "shape.h"
using namespace std;

namespace ex08 
{
    class Circle : public Shape
    {
    private:
        double radius;
    
        
    public:
        Circle(string color, string line, double radius) : Shape(color, line) { this->radius = radius;};
        void setRadius(double radius);
        double getRadius();
        double getCircumference();
        double getArea();
        string toString();
    };
}

#endif
