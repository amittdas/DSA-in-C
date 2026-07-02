#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

// Head and Tail pointers
struct Node *head = NULL;
struct Node *tail = NULL;

// Create a new node
struct Node* createNode(int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

// Push Front
void push_front(int val) {
    struct Node *newNode = createNode(val);

    if (head == NULL) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

// Push Back
void push_back(int val) {
    struct Node *newNode = createNode(val);

    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

// Print Linked List
void printList() {
    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {

    push_front(3);
    push_front(2);
    push_front(1);

    push_back(4);
    push_back(5);
    push_back(6);

    printList();

    return 0;
}