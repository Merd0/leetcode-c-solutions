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
 * Alternative:
 * Sort from small to large, then scan backward for the 3rd distinct value.
 * If fewer than 3 distinct values exist, return the maximum.
 */
