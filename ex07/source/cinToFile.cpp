//
//  fileiotask.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "fileiotask.h"

#include <cstdlib>

using namespace std;

namespace ex07 {
    void cinToFile()
    {
        ofstream output;
        
        output.open("/Users/ken/Development/learning/c++/Ovinger C++/Ovinger C++/output.txt");
        if (output.fail())
        {
            cout << "Failed opening file" << endl;
            exit(1);
        }
        
        if (output.is_open())
        {
            cout << "The file has been opened." << endl;
        }
        
        const string exitString = ":quit";
        
        cout << "File opened. Please enter your text, and type " << exitString << " to quit" << endl;
        string line;
        
        do {
            getline(cin, line); 
            
            if (line == exitString)
                break;
            
            output << line << endl;
            
        } while (line != exitString);
        
        output << "End of hell";
        
        output.close();
        
        cout << "Exited File" << endl;
    }
    
}