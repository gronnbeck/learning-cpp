//
//  cstringstask.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

namespace ex06 {
    void getInput(char*);

    
    void ex06main() {
        char cstring[300];
        
    }
    
    void getInput(char* input)
    {
        cin.getline(input, 300);
    }
    
    int countCharacters(char* cstring)
    {
        int count = 0;
        while(cstring[count] != '\0')
        {
            count++;
        }
        return count;
    }
    
    
    void reverseString(char* cstring)
    {
        int count = countCharacters(cstring)-1;
        for (int i = 0; i < floor(count/2); i++)
        {
            char temp = cstring[i];
            cstring[i] = cstring[count-i];
            cstring[count-i] = temp;
            
        }
    }
}