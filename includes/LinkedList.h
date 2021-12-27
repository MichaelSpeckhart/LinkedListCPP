#include <cstdio>
#include <cstdlib>
#include <iostream>

#ifndef LINKEDLIST_h
#define LINKEDLIST_h

//***************
// Creating Node struct that will contain value as an integer
// and a pointer to the next value in the LinkedList.S
//***************
struct Node {
    int value;
    Node *next;
};

class LinkedList {
    private:
        Node head;
        size_t length;
    
    public:
        LinkedList();
        bool insertFront();
        bool insertLast();
        bool insertAtPosition();
        void display();
};



#endif