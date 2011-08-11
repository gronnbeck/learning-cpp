//
//  facorial.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "ex08.h"

using namespace std;

namespace ex08 {
    
    int factorial(int n) 
    {
        if (n == 1) return 1;
        return n * factorial(n-1);
    }
    
}
