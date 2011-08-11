//
//  swap.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
using namespace std;

namespace ex06 {
    
    void mySwap(int* x, int* y)
    {
        int temp = *x;
        
        *x = *y;
        *y = temp;
    }
    
}
