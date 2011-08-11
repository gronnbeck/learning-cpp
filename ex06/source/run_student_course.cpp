//
//  run_student_course.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "student.h"
#include "course.h"

namespace ex06 
{
int studentCourse(){
	Student *s1 = new Student("Per Person");
	Student *s2 = new Student("Tor Jenssen");
	Student *s3 = new Student("Lene Marlin");
	Course *c1 = new Course("TDT4102");
	Course *c2 = new Course("TDT4100");
	c1->addStudent(s1);
	c1->addStudent(s2);
	c1->addStudent(s3);
	c2->addStudent(s1);
	c2->addStudent(s2);
	cout << s1;
	cout << s2;
	cout << s3;
	cout << c1;
	cout << c2;
    
	return 0;
}
}