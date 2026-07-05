#include <stdlib.h>

typedef struct {
    int nums[40001];
    int size;
} ProductOfNumbers;

ProductOfNumbers* productOfNumbersCreate(void) {
    ProductOfNumbers* obj = malloc(sizeof(ProductOfNumbers));

    if (obj == NULL) {
        return NULL;
    }

    obj->size = 0;

    return obj;
}

void productOfNumbersAdd(ProductOfNumbers* obj, int num) {
    obj->nums[obj->size] = num;
    obj->size++;
}

int productOfNumbersGetProduct(ProductOfNumbers* obj, int k) {
    int product = 1;
    int start = obj->size - k;

    for (int i = start; i < obj->size; i++) {
        product *= obj->nums[i];
    }

    return product;
}

void productOfNumbersFree(ProductOfNumbers* obj) {
    free(obj);
}
