#include <stdlib.h>

static int compare_int(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* successfulPairs(int* spells,
                     int spellsSize,
                     int* potions,
                     int potionsSize,
                     long long success,
                     int* returnSize) {
    qsort(potions, potionsSize, sizeof(int), compare_int);

    int* answer = malloc((size_t)spellsSize * sizeof(int));
    *returnSize = spellsSize;

    for (int i = 0; i < spellsSize; i++) {
        int left = 0;
        int right = potionsSize - 1;
        int firstValid = potionsSize;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long product = (long long)spells[i] * potions[mid];

            if (product >= success) {
                firstValid = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        answer[i] = potionsSize - firstValid;
    }

    return answer;
}
