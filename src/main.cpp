#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "../includes/LinkedList.h"

using namespace std;



int main() {
    cout << "Welcome to Linked List program" << endl;
    LinkedList ll;
    ll.insertFront(1);
    ll.insertFront(2);
    ll.insertFront(12312);
    ll.insertFront(21);
    ll.insertFront(456);
    ll.insertLast(555);
    ll.insertLast(10001);
    ll.display();
    
    return 0;
}