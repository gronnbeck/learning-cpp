//
//  maximum.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>

using namespace std;

namespace ex09 {
    
    template<class T>
    void maximum(T x, T y)
    {
        return x > y;
    }
    
//    Task C
//    What are the restrictions for using the above function (related to the way you have implemented it)? It will work for all basic data types (int, char, double), but if you     call the function with arguments of a user-defined type, such as a Person or Circle class, your program might not compile.
//    Make sure you understand why it is so, and what you can do to use this function with     your own classes.
//    One has to override the > operator in custom classes. If a class is to be used in a     template function. It is recommended to override destroy (delete), copy (=), <, > and other important operators and functions.
    
    

}   