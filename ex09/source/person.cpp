//
//  person.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <sstream>
#include "person.h"

using namespace std;

namespace ex09 {
    
    Person::Person(string firstname, string lastname)
    {
        this->firstname = firstname;
        this->lastname = lastname;
    }
    
    string Person::getFirstName()
    {
        return firstname;
    }
    
    string Person::getLastName()
    {
        return lastname;
    }
    
    string Person::getFullName()
    {
        stringstream ss;
        ss << firstname << " " << lastname;
        return ss.str();
    }
    
    bool Person::operator >(Person p)
    {
        return getFullName() > p.getFullName();
    }
    
    bool Person::operator ==(Person p)
    {
        return getFullName() == p.getFullName();
    }
    
    bool Person::operator <(Person p)
    {
        return !(*this > p || *this == p);
    }
    
}

// hanneandersx