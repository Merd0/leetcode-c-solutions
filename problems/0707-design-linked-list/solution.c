#include <stdlib.h>

typedef struct MyLinkedList {
    int val;
    struct MyLinkedList* next;
} MyLinkedList;

MyLinkedList* myLinkedListCreate() {
    MyLinkedList* obj = malloc(sizeof(MyLinkedList));
    obj->next = NULL;   // Dummy head.
    return obj;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    if (index < 0) {
        return -1;
    }

    MyLinkedList* cur = obj->next; // First real node.

    for (int i = 0; i < index; i++) {
        if (cur == NULL) {
            return -1;
        }
        cur = cur->next;
    }

    if (cur == NULL) {
        return -1;
    }

    return cur->val;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* newNode = malloc(sizeof(MyLinkedList));
    newNode->val = val;

    newNode->next = obj->next;
    obj->next = newNode;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* cur = obj;

    while (cur->next != NULL) {
        cur = cur->next;
    }

    MyLinkedList* newNode = malloc(sizeof(MyLinkedList));
    newNode->val = val;
    newNode->next = NULL;

    cur->next = newNode;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    if (index < 0) {
        index = 0;
    }

    MyLinkedList* prev = obj;

    for (int i = 0; i < index; i++) {
        if (prev->next == NULL) {
            return;
        }
        prev = prev->next;
    }

    MyLinkedList* newNode = malloc(sizeof(MyLinkedList));
    newNode->val = val;

    newNode->next = prev->next;
    prev->next = newNode;
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    if (index < 0) {
        return;
    }

    MyLinkedList* prev = obj;

    for (int i = 0; i < index; i++) {
        if (prev->next == NULL) {
            return;
        }
        prev = prev->next;
    }

    if (prev->next == NULL) {
        return;
    }

    MyLinkedList* deleteNode = prev->next;
    prev->next = deleteNode->next;

    free(deleteNode);
}

void myLinkedListFree(MyLinkedList* obj) {
    MyLinkedList* cur = obj;

    while (cur != NULL) {
        MyLinkedList* temp = cur;
        cur = cur->next;
        free(temp);
    }
}
