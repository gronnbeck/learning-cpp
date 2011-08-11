//
//  dynamic_arrays.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "ex06.h"

using namespace std;

namespace ex06 {

void dynamicArrays()
{
    int incr_size = 5;
	int size = 0;
	int *table = new int[size];
	int *input = new int[incr_size];
	char c = 'y';
	while (toupper(c) == 'Y'){
		cout << "Write a sequence of " << incr_size << " integer values: ";
		for (int i = 0; i < incr_size; i++){
			cin >> input[i];
		}
		table = createNewTable(table, input, size, incr_size);
		size += incr_size;
		printTable(table, size);
		cout << "Continue (y/n): ";
		cin >> c;
	}
	return 0;
}

int* createNewTable(int* table, int* input, int size, int incr_size)
{
    int* newTable = new int[size+incr_size];
    
    for (int i = 0; i < size; i++)
    {
        newTable[i] = table[i];
    }
    
    for (int i = size; i < size+incr_size; i++)
    {
        newTable[i] = input[i-size];
    }
    
    return newTable;
}

void printTable(int* table, int size) 
{
    for (int i = 0; i < size; i++)
    {
        cout << table[i];
    }
    cout << endl;
}
}