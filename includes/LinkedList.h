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
    Node *prev;
};

class LinkedList {
    private:
        Node *head;
        int length;
    
    public:
        LinkedList();
        void insertFront(int value);
        void insertLast(int value);
        bool insertAtPosition(int value, int position);
        bool removeFirst();
        bool removeLast();
        bool removeAtPosition(int position);
        void reverseList();
        void display();
        int size();
        ~LinkedList();
};



#endif