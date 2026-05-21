#include <limits.h>

int thirdMax(int *nums, int numsSize)
{
    long first = LONG_MIN;
    long second = LONG_MIN;
    long third = LONG_MIN;

    for (int i = 0; i < numsSize; ++i) {
        long value = nums[i];

        /* Duplicate values do not count as a new maximum. */
        if (value == first || value == second || value == third) {
            continue;
        }

        if (value > first) {
            third = second;
            second = first;
            first = value;
        } else if (value > second) {
            third = second;
            second = value;
        } else if (value > third) {
            third = value;
        }
    }

    return third == LONG_MIN ? (int)first : (int)third;
}
