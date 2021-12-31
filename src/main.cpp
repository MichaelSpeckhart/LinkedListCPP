#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "../includes/LinkedList.h"

using namespace std;

void parseArgs(int, char **);
void runOptions(char **);
void printOptions();

int main() {
    cout << "Welcome to Linked List program\n" << endl;
    printOptions();

    LinkedList ll;
    
    for(int i = 0; i < 30; i++) {
        ll.insertFront(i);
    }

    ll.display();
    ll.insertAtPosition(1, 5);
    ll.insertAtPosition(555, 1);
    ll.insertAtPosition(432, 0);
    ll.insertAtPosition(1, 21);
    ll.display();
    return 0;
}

void printOptions() {
    cout << "***********************************" << endl;
    cout << "Options for Linked List:\n"
            "1. Insert node at beggining of list\n" 
            "2. Insert node at end of the list\n"
            "3. Insert node at certain position\n"
            "4. Display the list\n"
            "5. Reverse the Linked List\n"
            "6. Remove the first Node\n"
            "7. Remove the last Node\n"
            "8. Remove a node from a position"
            << endl;
    cout << "***********************************" << endl;
}