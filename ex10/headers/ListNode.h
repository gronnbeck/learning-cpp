//
//  ListNode.h
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Ovinger_C___ListNode_h
#define Ovinger_C___ListNode_h

using namespace std;

class LinkedList;

class ListNode{
private:
	string value;
	ListNode *next;
public:
	ListNode(const string &);
	string getValue() const;
	ListNode *getNext() const;
    
	friend class LinkedList;
};

#endif
