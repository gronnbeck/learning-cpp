//
//  Student.h
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Ovinger_C___Student_h
#define Ovinger_C___Student_h

#include <string>
#include <vector>

using namespace std;

namespace ex06 {
    class Course;
    
    class Student {
    private:
        string name;
        vector<Course*> courses;
    public:
        Student(string name): name(name){};
        string getName();
        void addCourse(Course *c);
        friend ostream& operator <<(ostream&, Student*);
    };

}
#endif
