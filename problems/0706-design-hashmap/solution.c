#include <stdlib.h>

typedef struct {
    int* value;
    int* exist;
} MyHashMap;

MyHashMap* myHashMapCreate(void) {
    MyHashMap* obj = malloc(sizeof(MyHashMap));

    obj->value = malloc(1000001 * sizeof(int));
    obj->exist = calloc(1000001, sizeof(int));

    return obj;
}

void myHashMapPut(MyHashMap* obj, int key, int value) {
    obj->value[key] = value;
    obj->exist[key] = 1;
}

int myHashMapGet(MyHashMap* obj, int key) {
    if (obj->exist[key] == 0) {
        return -1;
    }

    return obj->value[key];
}

void myHashMapRemove(MyHashMap* obj, int key) {
    obj->exist[key] = 0;
}

void myHashMapFree(MyHashMap* obj) {
    free(obj->value);
    free(obj->exist);
    free(obj);
}
