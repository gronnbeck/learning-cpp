//
//  course.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "student.h"
#include "course.h"

#include <string>
#include <vector>

using namespace std;

namespace ex06
{
    
    string Course::getName()
    {
        return name;
    }
    
    void Course::addStudent(Student *s)
    {
        students.push_back(s);
        s->addCourse(this);
    }
    
    ostream& operator << (ostream& output, Course* c)
    {
        output << c->name;
        vector<Student*>::iterator p;
        for(p = c->students.begin(); p != c->students.end(); p++)
        {
            Student* student = *p;
            output << student->getName() << " ";
        }
        output << endl;
        return output;
    }
}