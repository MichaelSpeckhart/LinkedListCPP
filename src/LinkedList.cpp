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
    return;
}

void LinkedList::insertLast(int value) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    if(head == NULL) {
        node->next = head;
        head = node;
        return;
    }

    Node *last = head;
    while(last->next != NULL) {
        last = last->next;
    }
    last->next = node;
    return;

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
            return true;
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