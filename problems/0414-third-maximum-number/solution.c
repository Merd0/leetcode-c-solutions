#include <limits.h>

int thirdMax(int *nums, int numsSize)
{
    long first = LONG_MIN;
    long second = LONG_MIN;
    long third = LONG_MIN;

    for (int i = 0; i < numsSize; ++i) {
        long num = nums[i];

        if (num == first || num == second || num == third) {
            continue;
        }

        if (num > first) {
            third = second;
            second = first;
            first = num;
        } else if (num > second) {
            third = second;
            second = num;
        } else if (num > third) {
            third = num;
        }
    }

    if (third == LONG_MIN) {
        return (int)first;
    }

    return (int)third;
}

/*
 * Alternative solution:
 * This version sorts from small to large and scans backward to find the
 * 3rd distinct value. If there are fewer than 3 distinct values, it returns
 * the maximum value.
 *
 * #include <stdlib.h>
 *
 * int compare(const void* a, const void* b) {
 *     int x = *(int*)a;
 *     int y = *(int*)b;
 *
 *     if (x < y) return -1;
 *     if (x > y) return 1;
 *     return 0;
 * }
 *
 * int thirdMax(int* nums, int numsSize) {
 *     qsort(nums, numsSize, sizeof(int), compare);
 *
 *     int count = 1;
 *     int maxValue = nums[numsSize - 1];
 *
 *     for (int i = numsSize - 2; i >= 0; i--) {
 *         if (nums[i] != nums[i + 1]) {
 *             count++;
 *
 *             if (count == 3) {
 *                 return nums[i];
 *             }
 *         }
 *     }
 *
 *     return maxValue;
 * }
 */
