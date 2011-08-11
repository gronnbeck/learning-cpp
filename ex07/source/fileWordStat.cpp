#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>
#include "fileiotask.h"

using namespace std;

namespace ex07 {
    
    struct WordCount
    {
        string word;
        int count;
    };
    
    void fileWordStat()
    {
        ifstream input;
        input.open("/Users/ken/Development/learning/c++/Ovinger C++/Ovinger C++/ipsum.txt");
        
        if (input.fail())
        {
            cout << "Opening input file failed" << endl;
            exit(1);
        }
        
        vector<WordCount*> words;
        
        while (!input.eof()) 
        {
            string inputWord;
            getline(input, inputWord, ' ');
            inputWord = filterWord(inputWord);
            
            if (!containsWord(words, inputWord))
            {
                WordCount *word = new WordCount();
                word->word = inputWord;
                word->count = 1;
            
                words.push_back(word);
            }
            
        }
        
        vector<WordCount*>::iterator itr;
        for (itr = words.begin(); itr != words.end(); itr++)
        {
            WordCount *wc = *itr;
            cout << wc->word << ": " << wc->count << endl;
        }
        
    }
    
    bool containsWord(vector<WordCount*> words, string inputWord)
    {
        vector<WordCount*>::iterator itr;
        for (itr = words.begin(); itr != words.end(); itr++)
        {
            WordCount *wc = *itr;
            if (inputWord == wc->word)
            {
                wc->count++;
                return true;
            }
        }
        return false;
    }
    
    string filterWord(string word) 
    {
        string filteredString = "";
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == '\'') continue;
            else if (word[i] == '\n') continue;
            else filteredString.push_back(tolower(word[i]));
        }
        return filteredString;
    }
}
