#include <stdlib.h>

typedef struct {
    int stack[30000];
    int minStack[30000];
    int top;
} MinStack;

MinStack *minStackCreate()
{
    MinStack *obj = malloc(sizeof(MinStack));
    obj->top = -1;
    return obj;
}

void minStackPush(MinStack *obj, int val)
{
    obj->top++;

    obj->stack[obj->top] = val;

    if (obj->top == 0) {
        obj->minStack[obj->top] = val;
    } else {
        int oldMin = obj->minStack[obj->top - 1];

        if (val < oldMin) {
            obj->minStack[obj->top] = val;
        } else {
            obj->minStack[obj->top] = oldMin;
        }
    }
}

void minStackPop(MinStack *obj)
{
    obj->top--;
}

int minStackTop(MinStack *obj)
{
    return obj->stack[obj->top];
}

int minStackGetMin(MinStack *obj)
{
    return obj->minStack[obj->top];
}

void minStackFree(MinStack *obj)
{
    free(obj);
}
