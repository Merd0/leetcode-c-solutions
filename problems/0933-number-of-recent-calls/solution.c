#include <stdlib.h>

typedef struct {
    int arr[10000];
    int front;
    int rear;
} RecentCounter;

RecentCounter* recentCounterCreate(void) {
    RecentCounter* obj = malloc(sizeof(RecentCounter));

    obj->front = 0;
    obj->rear = 0;

    return obj;
}

int recentCounterPing(RecentCounter* obj, int t) {
    obj->arr[obj->rear] = t;
    obj->rear++;

    while (obj->arr[obj->front] < t - 3000) {
        obj->front++;
    }

    return obj->rear - obj->front;
}

void recentCounterFree(RecentCounter* obj) {
    free(obj);
}
