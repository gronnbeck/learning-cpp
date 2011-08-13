//
//  LinkedList.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "LinkedList.h"
#include "ListNode.h"

using namespace std;

LinkedList::LinkedList() 
{
    head = NULL;
    last = head;
} 

LinkedList::~LinkedList() 
{
    if (isEmpty())
    {
        return;
    }
    
    ListNode* next = head;
    while(next != last)
    {
        ListNode* toBeDeleted = next;
        next = toBeDeleted->next;
        
        delete toBeDeleted; // Something wrong cannot delete the pointer of a ListNode
    }
    
    if (next == last) // Debug if -- Does the c++ compilers have a mechanism to detect if you are in debug mode or not?
    {
        cout << "Need to delete last aswell. Okey?" << endl;
        delete next; // Same problem here
    }
    
}

bool LinkedList::isEmpty()
{
    if (head == NULL) return true;
    return false;
}

void LinkedList::insertAtFront(const string &val)
{
    ListNode* node = new ListNode(val);
    
    if (isEmpty())
    {
        head = node;
        last = NULL;
        head->next = last;
        return;
    }
    
    node->next = head;
    head = node;
}

void LinkedList::insertAtBack(const string &val)
{
    ListNode* node = new ListNode(val);
    
    if (isEmpty())
    {
        head = node;
        last = NULL;
        head->next = last;
        return;
    }
    else if (last == NULL)
    {
        last = node;
        return;
    }
    
    last->next = node;
    last = node;
}

bool LinkedList::removeFromFront(string &val)
{
    if (isEmpty())
        return false;

    val = head->value;
    head = head->next;
    return true;
}

bool LinkedList::removeFromBack(string &val)
{
    if (isEmpty())
        return false;
    
    // Not sure how to set the new last value.
    // "When in doubt use brute force" - ..... dont remember his name
    ListNode* currentNode = head;
    while(currentNode->next != last){
        currentNode = currentNode->next;
    }
    val = currentNode->value;
    last = currentNode;
    last->next = NULL;
    
    return true;
}

ListNode* LinkedList::search(const string &val)
{
    ListNode* currentNode = head;
    while (currentNode->value != val)
    {
        currentNode = currentNode->next;
        
        if (currentNode == last && currentNode->value != val) return NULL;
    }
    
    return currentNode;
}

ostream& operator <<(ostream &output, const LinkedList &ll)
{
    ListNode* currentNode = ll.head;
    output << "\t*\t" <<currentNode->getValue() << endl;
    do
    {
        currentNode = currentNode->getNext();
        output << "\t*\t" <<currentNode->getValue() << endl;
    } while (currentNode != ll.last);
    return output;
}

