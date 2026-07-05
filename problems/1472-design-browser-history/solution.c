#include <stdlib.h>

typedef struct {
    char* history[5001];
    int current;
    int size;
} BrowserHistory;

BrowserHistory* browserHistoryCreate(char* homepage) {
    BrowserHistory* obj = malloc(sizeof(BrowserHistory));

    if (obj == NULL) {
        return NULL;
    }

    obj->history[0] = homepage;
    obj->current = 0;
    obj->size = 1;

    return obj;
}

void browserHistoryVisit(BrowserHistory* obj, char* url) {
    obj->current++;
    obj->history[obj->current] = url;
    obj->size = obj->current + 1;
}

char* browserHistoryBack(BrowserHistory* obj, int steps) {
    obj->current -= steps;

    if (obj->current < 0) {
        obj->current = 0;
    }

    return obj->history[obj->current];
}

char* browserHistoryForward(BrowserHistory* obj, int steps) {
    obj->current += steps;

    if (obj->current >= obj->size) {
        obj->current = obj->size - 1;
    }

    return obj->history[obj->current];
}

void browserHistoryFree(BrowserHistory* obj) {
    free(obj);
}
