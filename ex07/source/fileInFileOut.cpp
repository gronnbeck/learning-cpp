//
//  fileInFileOut.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "fileiotask.h"

using namespace std;

namespace ex07 {
    void fileInFileOut()
    {
        ifstream iFile;
        ofstream oFile;
        
        iFile.open("/Users/ken/Development/learning/c++/Ovinger C++/Ovinger C++/output.txt");
        if (iFile.fail())
        {
            cout << "Your input file failed!" << endl;
            exit(1);
        }
        
        oFile.open("/Users/ken/Development/learning/c++/Ovinger C++/Ovinger C++/output2.txt");
        if (oFile.fail())
        {
            cout << "Your output file failed, probably because it doesn't exist" << endl;
            exit(1);
        }
        
        while (!iFile.eof())
        {
            string next;
            getline(iFile, next);
            oFile << next;
        }
        
        iFile.close();
        oFile.close();
    }
}