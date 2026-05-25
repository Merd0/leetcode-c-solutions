#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    int* small;
    int* big;
    int minSize;
    int maxSize;

    // Choose the smaller array for the outer loop.
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

    // Result can contain at most minSize unique values.
    int* result = malloc(minSize * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < minSize; i++) {
        for (int j = 0; j < maxSize; j++) {

            if (small[i] == big[j]) {
                int alreadyAdded = 0;

                for (int k = 0; k < *returnSize; k++) {
                    if (result[k] == small[i]) {
                        alreadyAdded = 1;
                        break;
                    }
                }

                if (alreadyAdded == 0) {
                    result[*returnSize] = small[i];
                    (*returnSize)++;
                }
            }
        }
    }

    return result;
}
