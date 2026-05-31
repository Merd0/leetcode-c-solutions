#include <stdbool.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

bool asteroidsDestroyed(int mass, int* asteroids, int asteroidsSize) {
    qsort(asteroids, asteroidsSize, sizeof(int), cmp);

    long long currentMass = mass;

    for (int i = 0; i < asteroidsSize; i++) {
        if (currentMass < asteroids[i]) {
            return false;
        }

        currentMass += asteroids[i];
    }

    return true;
}
