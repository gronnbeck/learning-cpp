//
//  main.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

// Classes
#include "Rational.h"


// Test files
#include "restRational.h"
#include "testEx06.h"

// Functionality
#include "ex06.h"
#include "fileiotask.h"
#include "ex08.h"
#include "ex09.h"
#include "ex10.h"

// Others
#include <iostream>
using namespace std;


int main (int argc, const char * argv[])

{
    int ex = 10;
    
    if (ex == 5) 
    {
        ex05::testRationalGetNominatorAndDenominator();
        ex05::testOperatorOverloading(); 
    }
    else if (ex == 6) 
    {
        ex06::testMySwap();
        ex06::testGetInput();
        ex06::testCharacterCount();
        ex06::testReverseString();
        ex06::dynamicArrays();
        ex06::studentCourse();
    }
    else if (ex == 7)
    {
        ex07::cinToFile();
        ex07::fileInFileOut();
        ex07::fileCharStat();
        ex07::fileWordStat();
    }
    else if (ex == 8)
    {
        ex08::testCircle();
        ex08::testRectangle();
        ex08::virtualfunctions();
    }
    else if (ex == 9)
    {
        ex09::testShuffle();
        ex09::stringIterator();
        ex09::testPerson();
        ex09::testInsertOrdered();
    }
    else if (ex == 10)
    {
        ex10::testLinkedList();
        
    }
}

