#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    int* small;
    int* big;
    int minSize;
    int maxSize;

    if (nums1Size < nums2Size) {
        small = nums1;
        big = nums2;
        minSize = nums1Size;
        maxSize = nums2Size;
    } else {
        small = nums2;
        big = nums1;
        minSize = nums2Size;
        maxSize = nums1Size;
    }

    int* result = malloc(minSize * sizeof(int));
    int* used = calloc(maxSize, sizeof(int));

    *returnSize = 0;

    for (int i = 0; i < minSize; i++) {
        for (int j = 0; j < maxSize; j++) {

            if (used[j] == 0 && small[i] == big[j]) {
                result[*returnSize] = small[i];
                (*returnSize)++;

                used[j] = 1;
                break;
            }
        }
    }

    free(used);
    return result;
}
