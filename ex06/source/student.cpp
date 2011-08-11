//
//  student.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "student.h"
#include "course.h"

#include <string>
#include <vector>

#include <iostream>
using namespace std;

namespace ex06
{
    string Student::getName()
    {
        return name;
    }
    
    void Student::addCourse(Course *c)
    {
        courses.push_back(c);
    }
    
    ostream& operator <<(ostream& output, Student *s)
    {
        output << s->name << ": ";
        vector<Course*>::iterator course;
    
        for (course = s->courses.begin(); course != s->courses.end(); course++) {
            Course* aCourse = *course;
            output << aCourse->getName() << " ";
        }
        output << endl;
        return output;
    }

}