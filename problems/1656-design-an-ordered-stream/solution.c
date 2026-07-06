#include <stdlib.h>

typedef struct {
    char** stream;
    int size;
    int ptr;
} OrderedStream;

OrderedStream* orderedStreamCreate(int n) {
    OrderedStream* obj = malloc(sizeof(OrderedStream));

    if (obj == NULL) {
        return NULL;
    }

    /* idKey starts from 1, so index 0 is intentionally unused. */
    obj->stream = calloc(n + 1, sizeof(char*));

    if (obj->stream == NULL) {
        free(obj);
        return NULL;
    }

    obj->size = n;
    obj->ptr = 1;

    return obj;
}

char** orderedStreamInsert(OrderedStream* obj, int idKey, char* value, int* retSize) {
    obj->stream[idKey] = value;

    if (idKey != obj->ptr) {
        *retSize = 0;
        return NULL;
    }

    int start = obj->ptr;
    int end = obj->ptr;
    int count = 0;

    while (end <= obj->size && obj->stream[end] != NULL) {
        count++;
        end++;
    }

    char** result = malloc(count * sizeof(char*));

    if (result == NULL) {
        *retSize = 0;
        return NULL;
    }

    for (int i = 0; i < count; i++) {
        result[i] = obj->stream[start + i];
    }

    *retSize = count;
    obj->ptr = end;

    return result;
}

void orderedStreamFree(OrderedStream* obj) {
    free(obj->stream);
    free(obj);
}
