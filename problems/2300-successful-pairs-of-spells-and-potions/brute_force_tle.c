#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* successfulPairs(int* spells,
                     int spellsSize,
                     int* potions,
                     int potionsSize,
                     long long success,
                     int* returnSize) {
    int* answer = malloc((size_t)spellsSize * sizeof(int));
    *returnSize = spellsSize;

    for (int i = 0; i < spellsSize; i++) {
        int count = 0;

        for (int j = 0; j < potionsSize; j++) {
            if ((long long)spells[i] * potions[j] >= success) {
                count++;
            }
        }

        answer[i] = count;
    }

    return answer;
}
