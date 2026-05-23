#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int in[100];
    int out[100];
    int topIn;
    int topOut;
} MyQueue;

MyQueue *myQueueCreate()
{
    MyQueue *obj = malloc(sizeof(MyQueue));
    obj->topIn = -1;
    obj->topOut = -1;
    return obj;
}

void myQueuePush(MyQueue *obj, int x)
{
    obj->in[++obj->topIn] = x;
}

int myQueuePop(MyQueue *obj)
{
    if (obj->topOut == -1) {
        while (obj->topIn != -1) {
            obj->out[++obj->topOut] = obj->in[obj->topIn--];
        }
    }

    return obj->out[obj->topOut--];
}

int myQueuePeek(MyQueue *obj)
{
    if (obj->topOut == -1) {
        while (obj->topIn != -1) {
            obj->out[++obj->topOut] = obj->in[obj->topIn--];
        }
    }

    return obj->out[obj->topOut];
}

bool myQueueEmpty(MyQueue *obj)
{
    return obj->topIn == -1 && obj->topOut == -1;
}

void myQueueFree(MyQueue *obj)
{
    free(obj);
}
