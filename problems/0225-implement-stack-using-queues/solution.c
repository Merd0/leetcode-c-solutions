#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int q[100];
    int size;
} MyStack;

MyStack *myStackCreate()
{
    MyStack *obj = malloc(sizeof(MyStack));
    obj->size = 0;
    return obj;
}

void myStackPush(MyStack *obj, int x)
{
    obj->q[obj->size] = x;
    obj->size++;

    /* yeni eklenen elemani one almak icin eski elemanlari arkaya dondur */
    for (int i = 0; i < obj->size - 1; i++) {
        int temp = obj->q[0];

        /* sola kaydir */
        for (int j = 0; j < obj->size - 1; j++) {
            obj->q[j] = obj->q[j + 1];
        }

        /* eski on elemani arkaya koy */
        obj->q[obj->size - 1] = temp;
    }
}

int myStackPop(MyStack *obj)
{
    int value = obj->q[0];

    for (int i = 0; i < obj->size - 1; i++) {
        obj->q[i] = obj->q[i + 1];
    }

    obj->size--;

    return value;
}

int myStackTop(MyStack *obj)
{
    return obj->q[0];
}

bool myStackEmpty(MyStack *obj)
{
    return obj->size == 0;
}

void myStackFree(MyStack *obj)
{
    free(obj);
}
