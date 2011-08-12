#include <string>
#include <sstream>

#include "shape.h"

using namespace std;

namespace ex08 {
    

    Shape::Shape(string color, string line){
        this->color = color;
        this->line = line;
    }

    void Shape::setColor(string color){
        this->color = color;
    }

    string Shape::getColor(){
        return color;
    }

    void Shape::setLine(string line){
        this->line = line;
    }

    string Shape::getLine(){
        return line;
    }
    

    string Shape::toString(){
        stringstream ss;
        ss << "Shape = " << getName() << ", Color = " << color << ", Line = " << line;
        return ss.str();
    }
    
    string Shape::getName()
    {
        return "base";
    }

}