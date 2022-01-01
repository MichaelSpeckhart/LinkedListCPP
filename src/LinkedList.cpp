#include "../includes/LinkedList.h"

LinkedList::LinkedList() {
    head = NULL;
    length = 0;
}

void LinkedList::insertFront(int value) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->value = value;
    node->next = head;
    head = node;
    length++;
    std::cout << "Linked List after inserting Node at head of the list:" << std::endl;
    display();
    return;
}

void LinkedList::insertLast(int value) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    if(head == NULL) {
        node->next = head;
        head = node;
        length++;
        return;
    }

    Node *last = head;
    while(last->next != NULL) {
        last = last->next;
    }
    last->next = node;
    length++;
    std::cout << "Linked List after inserting node in last position:" << std::endl;
    display();
    return;
}

bool LinkedList::removeFirst() {
    if(head == NULL) {
        std::cerr << "Error: head is null, no node to remove." << std::endl;
        return false;
    }

    head = head->next;
    std::cout << "Linked List after removing first node: " << std::endl;
    display();
    return true;
}

bool LinkedList::removeLast() {
    if(head == NULL) {
        std::cerr << "Error: head is null, no last node to remove." << std::endl;
        return false;
    }

    Node *last = head;
    Node *prev = head;
    while(last->next != NULL) {
        prev = last;
        last = last->next;
    }

    last = prev;
    prev->next = NULL;
    std::cout << "Linked List after removing the last node:" << std::endl;
    display();
    return true;
}

bool LinkedList::insertAtPosition(int value, int position) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;

    if(position <= 0 || position > length + 1) {
        std::cerr << "Error: position is out of bounds for the length of the list" << std::endl;
        return false;
    }

    int count = 0;
    Node *next = head;
    Node *prev = head;

    while(next) {
        if(count == position) {
            prev->next = newNode;
            newNode->next = next;
            length++;
            std::cout << "Linked List after inserting node at position: " << position << std::endl;
            display();
            return true;
        }
        prev = next;
        next = prev->next;
        count++;
    }

    return false;
}

bool LinkedList::removeAtPosition(int position) {
    if(position <= 0 || position > length + 1) {
        std::cerr << "Error: position is out of bounds for the length of the list" << std::endl;
        return false;
    }

    int count = 0;
    Node *next = head;
    Node *prev = head;

    while(next) {
        if(count == position) {
            prev->next = next->next;
            length--;
            std::cout << "Linked List after removing node from position: " << position << std::endl;
            display();
        }
        prev = next;
        next = prev->next;
        count++;
    }

    return false;
}

void LinkedList::display() {
    Node *tmp = head;
    Node *ptr = head;
    while(ptr) {
        tmp = ptr;
        std::cout << tmp->value << " -> ";
        ptr = tmp->next;
    }
    std::cout << "Null" << std::endl;
}

LinkedList::~LinkedList() {
    Node *ptr = head;
    while(ptr != 0) {
        Node *next = ptr->next;
        delete ptr;
        ptr = next;
    }
    head = 0;
}