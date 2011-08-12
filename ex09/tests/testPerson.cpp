//
//  testPerson.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "ex09.h"
#include "person.h"


namespace ex09 {
    
    void testPerson()
    {
        Person p = Person("Hello", "World");
        Person last = Person("X", "X");
        
        if (p < last)
            cout << "p is before last in an alphanumeric order" << endl;
    }
    
    
}