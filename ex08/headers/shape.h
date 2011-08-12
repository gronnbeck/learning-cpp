#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <cmath>

#define PI 4.0 * atan(1.0) 	//This line enables you to use PI in your calculations

namespace ex08 {
    
class Shape {
private:
	std::string color;
	std::string line;
public:
	Shape(std::string color, std::string line);	//Constructor
    void setColor(std::string color);		//Used to change the color
	void setLine(std::string line);			//Used to change the line type
	std::string getColor();				//Returns the color
	std::string getLine();				//Returns the line type
	virtual std::string toString();				//Returns a string that descibes the shape in this format "Color = blue, Line = dotted"
    virtual std::string getName();
}; 
}
#endif