//
//  fileCharStat.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "fileiotask.h"
#include <fstream>
using namespace std;


namespace ex07 {
    
    void fileCharStat(){
        ifstream input;
        input.open("/Users/ken/Development/learning/c++/Ovinger C++/Ovinger C++/ipsum.txt");
        
        if (input.fail())
        {
            cout << "Opening input file failed" << endl;
            exit(1);
        }
        int numOfChars = 'z'-'a' + 1;
        int chars[numOfChars];
        
        for (int i = 0; i < numOfChars; i++)
        {
            chars[i] = 0;
        }
        
        while(!input.eof())
        {
            string line;
            getline(input, line);
            
            for (int i = 0; i < line.length(); i++)
            {
                char aChar = line[i];
                chars[aChar - 'a']++;
            }
        }
        
        for (int i = 0; i < numOfChars; i++)
        {
            
            cout << char('a'+i) << ": " << chars[i] << endl;
        }
        
    }
}
