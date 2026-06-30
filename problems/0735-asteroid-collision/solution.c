#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {
    int* stack = malloc((size_t)asteroidsSize * sizeof(int));
    int top = -1;

    for (int i = 0; i < asteroidsSize; i++) {
        int current = asteroids[i];
        int alive = 1;

        while (alive && top >= 0 && stack[top] > 0 && current < 0) {
            if (stack[top] < -current) {
                top--;
            } else if (stack[top] == -current) {
                top--;
                alive = 0;
            } else {
                alive = 0;
            }
        }

        if (alive) {
            stack[++top] = current;
        }
    }

    *returnSize = top + 1;
    return stack;
}
