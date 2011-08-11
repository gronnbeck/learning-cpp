//
//  circle.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "circle.h"
#include "shape.h"
#include <cmath>

using namespace std;

namespace ex08 {

//    Circle::Circle(string color, string line, double radius) : Shape(color, line)
//    {
//        this->radius = radius;
//    }
    
    
    void Circle::setRadius(double radius)
    {
        this->radius = radius;
    }
    
    double Circle::getRadius()
    {
        return radius;
    }
    
    double Circle::getCircumference()
    {
        return 2 * PI * radius;
    }
    
    double Circle::getArea()
    {
        return PI * radius * radius;
    }
    
    
    
}