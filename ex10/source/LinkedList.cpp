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

    ListNode* toBeDeleted = head;
    val = head->value;
    head = head->next;
    
    delete toBeDeleted;
    
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
    ListNode* toBeDeleted = last;
    
    val = currentNode->value;
    last = currentNode;
    last->next = NULL;
    
    delete toBeDeleted;
    
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

void LinkedList::remove(const string &val)
{
    ListNode* toRemove = search(val);
    if (toRemove == NULL) return;
    
    if (toRemove == last) {
        delete last;
    }
    
//    cout << "DEBUG: " << toRemove->value << endl;
//    cout << "DEBUG: " << toRemove->next->value << endl;

//    toRemove = toRemove->next;    // Change pointer reference
    
//    Insert HACK below:
//    Couldnt get the line above to work... I don't know why... So i used a another approach below... It is certainly a bad hack.. And I do have to read my self upon pointers...
    
    ListNode* toBeDeleted = toRemove->next; // deletes this one because its copied over to "toRemove"...
    
    *toRemove = *toRemove->next;
    
    delete toBeDeleted;
    
    if (toRemove->next == NULL) // Needed to move the "last" reference ..
        last = toRemove;
    
}

ostream& operator <<(ostream &output, const LinkedList &ll)
{
    ListNode* currentNode = ll.head;
    output << "\t*\t" <<currentNode->getValue() << endl;
    while (currentNode != ll.last)
    {
        currentNode = currentNode->getNext();
        output << "\t* " <<currentNode->getValue() << endl;
    } 
    return output;
}


