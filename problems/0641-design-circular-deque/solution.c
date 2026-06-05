#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int* arr;
    int front;
    int rear;
    int size;
    int capacity;
} MyCircularDeque;

MyCircularDeque* myCircularDequeCreate(int k) {
    MyCircularDeque* obj = malloc(sizeof(MyCircularDeque));

    obj->arr = malloc(k * sizeof(int));
    obj->front = 0;
    obj->rear = -1;
    obj->size = 0;
    obj->capacity = k;

    return obj;
}

bool myCircularDequeIsEmpty(MyCircularDeque* obj) {
    return obj->size == 0;
}

bool myCircularDequeIsFull(MyCircularDeque* obj) {
    return obj->size == obj->capacity;
}

bool myCircularDequeInsertFront(MyCircularDeque* obj, int value) {
    if (myCircularDequeIsFull(obj)) {
        return false;
    }

    if (obj->size == 0) {
        obj->front = 0;
        obj->rear = 0;
    } else {
        obj->front = (obj->front - 1 + obj->capacity) % obj->capacity;
    }

    obj->arr[obj->front] = value;
    obj->size++;

    return true;
}

bool myCircularDequeInsertLast(MyCircularDeque* obj, int value) {
    if (myCircularDequeIsFull(obj)) {
        return false;
    }

    obj->rear = (obj->rear + 1) % obj->capacity;
    obj->arr[obj->rear] = value;
    obj->size++;

    return true;
}

bool myCircularDequeDeleteFront(MyCircularDeque* obj) {
    if (myCircularDequeIsEmpty(obj)) {
        return false;
    }

    obj->front = (obj->front + 1) % obj->capacity;
    obj->size--;

    return true;
}

bool myCircularDequeDeleteLast(MyCircularDeque* obj) {
    if (myCircularDequeIsEmpty(obj)) {
        return false;
    }

    obj->rear = (obj->rear - 1 + obj->capacity) % obj->capacity;
    obj->size--;

    return true;
}

int myCircularDequeGetFront(MyCircularDeque* obj) {
    if (myCircularDequeIsEmpty(obj)) {
        return -1;
    }

    return obj->arr[obj->front];
}

int myCircularDequeGetRear(MyCircularDeque* obj) {
    if (myCircularDequeIsEmpty(obj)) {
        return -1;
    }

    return obj->arr[obj->rear];
}

void myCircularDequeFree(MyCircularDeque* obj) {
    free(obj->arr);
    free(obj);
}
