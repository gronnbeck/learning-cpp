//
//  fibonacci.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "ex08.h"

using namespace std;

namespace ex08 
{
    int fibonacci(int n)
    {
        if (n == 0 || n == 1) return 1;
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
