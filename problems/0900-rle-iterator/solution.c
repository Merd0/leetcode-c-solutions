#include <stdlib.h>

typedef struct {
    int* encoding;
    int encodingSize;
    int index;
} RLEIterator;

RLEIterator* rLEIteratorCreate(int* encoding, int encodingSize) {
    RLEIterator* obj = malloc(sizeof(RLEIterator));

    if (obj == NULL) {
        return NULL;
    }

    obj->encoding = encoding;
    obj->encodingSize = encodingSize;
    obj->index = 0;

    return obj;
}

int rLEIteratorNext(RLEIterator* obj, int n) {
    while (obj->index < obj->encodingSize) {
        int count = obj->encoding[obj->index];
        int value = obj->encoding[obj->index + 1];

        if (count == 0) {
            obj->index += 2;
            continue;
        }

        if (count >= n) {
            obj->encoding[obj->index] -= n;
            return value;
        }

        /* Current run is not enough, so consume it and continue. */
        n -= count;
        obj->encoding[obj->index] = 0;
        obj->index += 2;
    }

    return -1;
}

void rLEIteratorFree(RLEIterator* obj) {
    free(obj);
}
