//
//  fileiotask.h
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Ovinger_C___fileiotask_h
#define Ovinger_C___fileiotask_h

#include <vector>

using namespace std;

namespace ex07 {
    struct WordCount;
    
    void cinToFile();
    void fileInFileOut();
    void fileCharStat();
    void fileWordStat();
    bool containsWord(vector<WordCount*> words, string word);
    string filterWord(string word);
}

#endif
