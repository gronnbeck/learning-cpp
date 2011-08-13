//
//  LinkedList.h
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Ovinger_C___LinkedList_h
#define Ovinger_C___LinkedList_h

#include <iostream>

using namespace std;

class ListNode;

class LinkedList{
private:
	ListNode *head;
	ListNode *last;
public:
	LinkedList();
	~LinkedList();
	bool isEmpty();
	void insertAtFront(const string &);
	void insertAtBack(const string &);
	bool removeFromFront(string&);
	bool removeFromBack(string&);
    
    ListNode* search(const string &);
    void remove(const string &);
    
	friend ostream &operator <<(ostream &, const LinkedList &);
    
    
};

#endif
