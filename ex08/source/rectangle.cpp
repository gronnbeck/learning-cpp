//
//  rectangle.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <sstream>

#include "shape.h"
#include "rectangle.h"


using namespace std;

namespace ex08 {
    
    void Rectangle::setWidth(double width)
    {
        this->width = width;
    }
    
    void Rectangle::setHeight(double height)
    {
        this->height = height;
    }
    
    double Rectangle::getWidth()
    {
        return width;
    }
    
    double Rectangle::getHeight()
    {
        return height;
    }
    
    double Rectangle::getCircumference()
    {
        return width*2 + height*2;
    }
    
    double Rectangle::getArea()
    {
        return width*height;
    }
    
    string Rectangle::toString()
    {
        stringstream ss;
        ss << Shape::toString() << ", Height = " << height << ", Width = " << width << ", Circumference = " << getCircumference() << ", Area = " << getArea();
        return ss.str();
    }
 
}