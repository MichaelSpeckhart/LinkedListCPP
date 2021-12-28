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
        Node *head;
        size_t length;
    
    public:
        LinkedList();
        void insertFront(int value);
        bool insertLast(int value);
        bool insertAtPosition(int position);
        void display();
        ~LinkedList();
};



#endif