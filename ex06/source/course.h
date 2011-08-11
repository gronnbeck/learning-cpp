//
//  course.h
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Ovinger_C___course_h
#define Ovinger_C___course_h

#include <string>
#include <vector>
using namespace std;

namespace ex06 {
    
class Student;

class Course{
private:
    string name;
    vector<Student*> students;
public:
    Course(string name): name(name){};
    string getName();
    void addStudent(Student *s);
    friend ostream& operator <<(ostream&, Course*);
};

}
#endif
