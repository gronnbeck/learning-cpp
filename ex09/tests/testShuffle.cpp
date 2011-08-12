//
//  testShuffle.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
//#include "ex09.h"
#include "../source/shuffle.cpp"

using namespace std;

namespace ex09 {
    
    void testShuffle()
    {
        int a[] = {1, 2, 3, 4, 5, 6, 7};
        shuffle(a, 7);
        
        double b[] = {1.2, 2.2, 3.2, 4.2};
        shuffle(b, 4);
        
        string c[] = {"one", "two", "three", "four"};
        shuffle(c, 4); 
    }
    
}
