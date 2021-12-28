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

}