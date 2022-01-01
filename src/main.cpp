#include <cstdio>
#include <cstdlib>
#include <ctime>
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
    
    for(int i = 1; i < 31; i++) {
        ll.insertLast(i);
    }

    

    ll.insertAtPosition(20, 20);
    

    ll.removeFirst();
    

    ll.removeLast();

    ll.removeAtPosition(10);
    
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