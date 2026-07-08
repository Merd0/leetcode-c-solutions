#include <stdlib.h>

typedef struct {
    int stack[1001];
    int top;
    int maxSize;
} CustomStack;

CustomStack* customStackCreate(int maxSize) {
    CustomStack* obj = malloc(sizeof(CustomStack));

    if (obj == NULL) {
        return NULL;
    }

    obj->top = -1;
    obj->maxSize = maxSize;

    return obj;
}

void customStackPush(CustomStack* obj, int x) {
    if (obj->top + 1 == obj->maxSize) {
        return;
    }

    obj->top++;
    obj->stack[obj->top] = x;
}

int customStackPop(CustomStack* obj) {
    if (obj->top == -1) {
        return -1;
    }

    int value = obj->stack[obj->top];
    obj->top--;

    return value;
}

void customStackIncrement(CustomStack* obj, int k, int val) {
    int count = k;

    if (count > obj->top + 1) {
        count = obj->top + 1;
    }

    for (int i = 0; i < count; i++) {
        obj->stack[i] += val;
    }
}

void customStackFree(CustomStack* obj) {
    free(obj);
}
