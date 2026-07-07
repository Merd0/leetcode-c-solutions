#include <stdlib.h>

typedef struct {
    int prices[10000];
    int size;
} StockSpanner;

StockSpanner* stockSpannerCreate(void) {
    StockSpanner* obj = malloc(sizeof(StockSpanner));

    if (obj == NULL) {
        return NULL;
    }

    obj->size = 0;

    return obj;
}

int stockSpannerNext(StockSpanner* obj, int price) {
    obj->prices[obj->size] = price;
    obj->size++;

    int count = 0;

    for (int i = obj->size - 1; i >= 0; i--) {
        if (obj->prices[i] <= price) {
            count++;
        } else {
            break;
        }
    }

    return count;
}

void stockSpannerFree(StockSpanner* obj) {
    free(obj);
}
