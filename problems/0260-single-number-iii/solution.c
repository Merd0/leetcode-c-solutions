#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int cmp(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int* singleNumber(int* nums, int numsSize, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), cmp);

    int* twoNumber = malloc(2 * sizeof(int));
    *returnSize = 2;

    int index = 0;

    for (int i = 0; i < numsSize; ) {
        // Eger son elemana geldiysek, bu kesin tektir.
        if (i == numsSize - 1) {
            twoNumber[index++] = nums[i];
            break;
        }

        // Yanindakiyle ayniysa cift demektir, ikisini atla.
        if (nums[i] == nums[i + 1]) {
            i += 2;
        }
        // Ayni degilse nums[i] tek sayidir.
        else {
            twoNumber[index++] = nums[i];
            i++;
        }
    }

    return twoNumber;
}
