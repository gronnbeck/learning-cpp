//
//  ex09.h
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Ovinger_C___ex09_h
#define Ovinger_C___ex09_h

#include <vector>
#include <list>
#include "person.h"

using namespace std;

namespace ex09
{
    void testShuffle();
    
    template<class T>
    void shuffle(T array[], int length);
    
    template<class T>
    void maximum(T x, T y);
    
    void stringIterator();
    void replace(vector<string>* vec, string replace, string with);
    
    void testPerson();
    
    void insertOrdered(list<Person> &list, Person p);
    void testInsertOrdered();
}


#endif
