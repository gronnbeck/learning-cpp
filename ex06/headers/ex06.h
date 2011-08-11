//
//  ex07.h
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Ovinger_C___ex07_h
#define Ovinger_C___ex07_h

namespace ex06 {
    void mySwap(int* a, int* b);
    void getInput(char* input);
    int countCharacters(char* chars);
    void reverseString(char* chars);
    
    // dynamic_arrays.cpp
    void dynamicArrays();
    int* createNewTable(int* table, int* input, int size, int incr_size);
    void printTable(int* table, int size);
    
    int studentCourse();
}

#endif
