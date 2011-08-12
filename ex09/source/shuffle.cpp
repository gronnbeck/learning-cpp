//
//  shuffle.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include "ex09.h"


using namespace std;

namespace ex09
{
    template<class T>
    void shuffle(T array[], int length)
    {
//        unsigned int seed = 0;
        srand(time(0));
        int timesToShuffle = rand() % length + length;
        
        for (int i = 0; i < timesToShuffle; i++)
        {
            int x = rand() % length;
            int y = rand() % length;
            swap(array[x], array[y]);
        }
        
        
    }
}