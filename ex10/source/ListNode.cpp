//
//  ListNode.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "ListNode.h"

using namespace std;

ListNode::ListNode(const string &str)
{
    value = str;
}

string ListNode::getValue() const
{
    return value;
}

ListNode* ListNode::getNext() const 
{
    return next;
}
