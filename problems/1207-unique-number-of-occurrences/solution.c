#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

bool uniqueOccurrences(int* arr, int arrSize) {
    int* count = calloc(2001, sizeof(int));

    for (int i = 0; i < arrSize; i++) {
        count[arr[i] + 1000]++;
    }

    qsort(count, 2001, sizeof(int), compare);

    for (int i = 0; i < 2000; i++) {
        if (count[i] != 0 && count[i] == count[i + 1]) {
            free(count);
            return false;
        }
    }

    free(count);
    return true;
}
