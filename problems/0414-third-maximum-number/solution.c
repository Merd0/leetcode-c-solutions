#include <limits.h>
#include <stdbool.h>

int thirdMax(int *nums, int numsSize)
{
    /*
     * Keep top three distinct maximum values.
     * bool flags are needed because INT_MIN can be a valid value.
     */
    long first = LONG_MIN;
    long second = LONG_MIN;
    long third = LONG_MIN;
    bool has_first = false;
    bool has_second = false;
    bool has_third = false;

    for (int i = 0; i < numsSize; ++i) {
        long value = nums[i];

        if ((has_first && value == first) ||
            (has_second && value == second) ||
            (has_third && value == third)) {
            continue;
        }

        if (!has_first || value > first) {
            third = second;
            has_third = has_second;
            second = first;
            has_second = has_first;
            first = value;
            has_first = true;
        } else if (!has_second || value > second) {
            third = second;
            has_third = has_second;
            second = value;
            has_second = true;
        } else if (!has_third || value > third) {
            third = value;
            has_third = true;
        }
    }

    return has_third ? (int)third : (int)first;
}
