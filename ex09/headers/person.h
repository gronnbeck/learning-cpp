//
//  person.h
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Ovinger_C___person_h
#define Ovinger_C___person_h

#include <string>

using namespace std;

namespace ex09 {
    
    class Person
    {
    private:
        string firstname;
        string lastname;
    public:
        Person(string firstname, string lastname);
        string getFirstName();
        string getLastName();
        string getFullName();
    
        bool operator >(Person p);
        bool operator <(Person p);
        bool operator ==(Person p);
    
    };
}

#endif
