#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int* exist;
} MyHashSet;

MyHashSet* myHashSetCreate(void) {
    MyHashSet* obj = malloc(sizeof(MyHashSet));
    obj->exist = calloc(1000001, sizeof(int));
    return obj;
}

void myHashSetAdd(MyHashSet* obj, int key) {
    obj->exist[key] = 1;
}

void myHashSetRemove(MyHashSet* obj, int key) {
    obj->exist[key] = 0;
}

bool myHashSetContains(MyHashSet* obj, int key) {
    return obj->exist[key] == 1;
}

void myHashSetFree(MyHashSet* obj) {
    free(obj->exist);
    free(obj);
}
