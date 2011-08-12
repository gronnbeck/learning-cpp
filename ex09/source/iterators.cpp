//
//  iterators.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "ex09.h"

using namespace std;

namespace ex09 {
    
    void stringIterator()
    {
        vector<string> vec;
        
        vec.push_back("hello");
        vec.push_back("world");
        vec.push_back("good");
        vec.push_back("morning");
        
        vector<string>::iterator itr;
        for (itr = vec.begin(); itr != vec.end(); itr++)
        {
            cout << *itr << endl;
        }
        
        cout << '\n' << "Now reverse" << endl;
        
        replace(&vec, "good", "hello");
        
        vector<string>::reverse_iterator ritr;
        for (ritr = vec.rbegin(); ritr != vec.rend(); ritr++)
        {
            cout << *ritr << endl;
        }
        
    }
    
    void replace(vector<string>* vec, string replace, string with)
    {
        vector<string>::iterator itr;
        for (itr = vec->begin(); itr != vec->end(); itr++)
        {
            if (*itr == replace)
            {
                itr = vec->erase(itr);
                vec->insert(itr, with);
            }
        }
    }
    
}