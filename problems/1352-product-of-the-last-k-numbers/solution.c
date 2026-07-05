#include <stdlib.h>

typedef struct {
    int prefix[40001];
    int size;
} ProductOfNumbers;

ProductOfNumbers* productOfNumbersCreate(void) {
    ProductOfNumbers* obj = malloc(sizeof(ProductOfNumbers));

    if (obj == NULL) {
        return NULL;
    }

    obj->prefix[0] = 1;
    obj->size = 1;

    return obj;
}

void productOfNumbersAdd(ProductOfNumbers* obj, int num) {
    if (num == 0) {
        obj->prefix[0] = 1;
        obj->size = 1;
        return;
    }

    obj->prefix[obj->size] = obj->prefix[obj->size - 1] * num;
    obj->size++;
}

int productOfNumbersGetProduct(ProductOfNumbers* obj, int k) {
    if (k >= obj->size) {
        return 0;
    }

    return obj->prefix[obj->size - 1] / obj->prefix[obj->size - 1 - k];
}

void productOfNumbersFree(ProductOfNumbers* obj) {
    free(obj);
}
