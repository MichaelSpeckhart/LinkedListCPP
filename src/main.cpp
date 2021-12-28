#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "../includes/LinkedList.h"

using namespace std;

int main() {
    cout << "Welcome to Linked List program" << endl;
    LinkedList ll;
    ll.insertFront(690);
    ll.insertFront(120);
    ll.display();
    
    return 0;
}