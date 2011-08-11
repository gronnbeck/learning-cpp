//
//  rectangle.h
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Ovinger_C___rectangle_h
#define Ovinger_C___rectangle_h

#include "shape.h"
using namespace std;

namespace ex08 {
    
    class Rectangle : public Shape
{
private:
    double width;
    double height;
public:
    Rectangle(string color, string line, double width, double height) : Shape(color, line)
    {
        this->width = width;
        this->height = height;
    }
    
    void    setWidth            (double      width);
    void    setHeight           (double     height);
    double  getWidth            ();
    double  getHeight           ();
    double  getCircumference    ();
    double  getArea             ();
    string  toString            ();
    
};

}
#endif
