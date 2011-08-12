//
//  testEx06.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "testEx06.h"
#include "ex06.h"

#include <iostream>
using namespace std;

namespace ex06 {
    
    void testMySwap() {
        int a = 1;
        int b = 2;
        
        mySwap(&a, &b);
        
        cout << "a = " << a << endl; //a should now be 2
        cout << "b = " << b << endl; //b should now be 1	
        
        int *c = new int(3);
        int *d = new int(4);
        
        mySwap(c, d); //Fill in the arguments here (Only alter this line in the code) 
        
        cout << "*c = " << *c << endl; //*c should now be 4
        cout << "*d = " << *d << endl; //*d should now be 3
    }
    
    void testGetInput()
    {
        char input[300];
        getInput(input);
        cout << input;
    }
    
    void testCharacterCount()
    {
        char cstring[10] = "hello";
        int count = countCharacters(cstring);
        cout << count << endl;
    }
    
    void testReverseString()
    {

        char cstring[10] = "hello";
        reverseString(cstring);
        cout << cstring;
    }
}