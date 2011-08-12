//
//  insertOrdered.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "person.h"
#include "ex09.h"
#include <list>

namespace ex09 {
    
    // A naive implementation of the search.
    // A binary search approach would scale better... Since the exam is right around the corner I cannot spend time making it scale perfectly.
    void insertOrdered(list<Person>& l, Person p)
    {
        list<Person>::iterator itr;
        for (itr = l.begin(); itr != l.end(); itr++)
        {
            Person itrPerson = *itr;
            if (p < itrPerson)
            {
                l.insert(itr, p);
                return;
            }
        }
        l.push_back(p);
    }
    
}