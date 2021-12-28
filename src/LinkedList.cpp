#include "../includes/LinkedList.h"

LinkedList::LinkedList() {
    head = new Node;
    head->next = 0;
    length = 0;
}

void LinkedList::insertFront(int value) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->value = value;
    if(head == NULL) {
        head = node;
        node->next =NULL;
        length++;
    }
    
}

void LinkedList::display() {
    Node *tmp = head;
    Node *ptr = head;
    while(ptr) {
        tmp = ptr;
        std::cout << tmp->value << " -> ";
        ptr = tmp->next;
    }
}

LinkedList::~LinkedList() {

}