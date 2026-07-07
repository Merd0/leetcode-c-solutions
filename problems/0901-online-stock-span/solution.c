#include <stdlib.h>

typedef struct {
    int prices[10000];
    int spans[10000];
    int top;
} StockSpanner;

StockSpanner* stockSpannerCreate(void) {
    StockSpanner* obj = malloc(sizeof(StockSpanner));

    if (obj == NULL) {
        return NULL;
    }

    obj->top = -1;

    return obj;
}

int stockSpannerNext(StockSpanner* obj, int price) {
    int currentSpan = 1;

    while (obj->top >= 0 && obj->prices[obj->top] <= price) {
        currentSpan += obj->spans[obj->top];
        obj->top--;
    }

    obj->top++;
    obj->prices[obj->top] = price;
    obj->spans[obj->top] = currentSpan;

    return currentSpan;
}

void stockSpannerFree(StockSpanner* obj) {
    free(obj);
}
