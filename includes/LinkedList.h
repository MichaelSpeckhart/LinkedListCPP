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
        void insertLast(int value);
        bool insertAtPosition(int value, int position);
        void removeFirst();
        void removeLast();
        void removeAtPosition();
        void reverseList();
        void display();
        ~LinkedList();
};



#endif