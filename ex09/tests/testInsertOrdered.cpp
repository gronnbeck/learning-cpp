//
//  testInsertOrdered.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <list>
#include "ex09.h"

using namespace std;

namespace ex09 {
    
    void testInsertOrdered()
    {
        list<Person> l;
        insertOrdered(l, Person("A", "Person"));
        insertOrdered(l, Person("B", "Person"));
        insertOrdered(l, Person("A", "APerson"));
        insertOrdered(l, Person("X", "Person"));
        insertOrdered(l, Person("C", "Person"));
        
        list<Person>::iterator itr;
        for (itr = l.begin(); itr != l.end(); itr++)
        {
            Person p = *itr;
            cout << p.getFullName() << endl;
        }
        
    }
}