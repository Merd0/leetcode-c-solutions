#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* except = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    // except[i] starts as the product of values to the left of i.
    except[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        except[i] = except[i - 1] * nums[i - 1];
    }

    // Multiply each left product by the product of values to its right.
    int rightProduct = 1;

    for (int i = numsSize - 1; i >= 0; i--) {
        except[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return except;
}
