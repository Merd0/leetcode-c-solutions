#include <stdlib.h>

int cmp(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;

    if (x > y) return -1;
    if (x < y) return 1;
    return 0;
}

int minimumCost(int* cost, int costSize) {
    qsort(cost, costSize, sizeof(int), cmp);

    int totalCost = 0;

    for (int i = 0; i < costSize; i++) {
        if (i % 3 != 2) {
            totalCost += cost[i];
        }
    }

    return totalCost;
}
