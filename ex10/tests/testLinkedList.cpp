//
//  testLinkedList.cpp
//  Ovinger C++
//
//  Created by Ken Grønnbeck on 8/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "ex10.h"
#include "LinkedList.h"
#include "ListNode.h"

using namespace std;

namespace ex10 {
    
    void testLinkedList()
    {
        cout << "Starting LinkedList Test" << endl;
        
        LinkedList ll = LinkedList();
//        Test isEmpty()
        if (!ll.isEmpty())
            cout << "The linkedlist should have been empty" << endl;
        
//        Test insertAtFront(const string &)
        ll.insertAtFront("hello world");
        if(ll.isEmpty())
            cout << "A node should have been pushed into the linkedlist" << endl;
        
        ll.insertAtBack("Noooo its the end");
        if (ll.isEmpty())
            cout << "What? How can it suddenly be empty" << endl;
        
        
        bool remove;
        string stringRemoved;
        remove = ll.removeFromFront(stringRemoved);
        if (!remove)
        {
            cout << "Did not remove 'hello world' as expected" << endl;
        }
        else 
        {
            cout << "Removed '" << stringRemoved << "'" << endl;
        }
        
        ll.insertAtFront("hello world");
        ll.insertAtFront("hello sun");
        
        remove = ll.removeFromBack(stringRemoved);
        if (!remove)
        {
            cout << "Didnot remove 'Nooo.....' from the bac as expected" << endl;
        }
        else 
        {
            cout << "Removed '"<< stringRemoved << "'" << endl;
        }
        
        ll.insertAtBack("Noooo its the end");
        
        cout << ll;
        
        
        ListNode* searchForHelloWorld = ll.search("hello world");
        if (searchForHelloWorld ==  NULL)
            cout << "Hmm search needs to be optimized... to find.. say something?" << endl;
        else
            cout << "The node that returned when searching for 'hello world' was '" << searchForHelloWorld->getValue() << "'" << endl;
        
        ll.remove("hello world");
        
        cout << ll;
        
        // Performance test
        
        for (int i = 0; i < 10000000; i++) {
            ll.insertAtFront("Sup");
            ll.remove("Sup");
        }
        
    }
}