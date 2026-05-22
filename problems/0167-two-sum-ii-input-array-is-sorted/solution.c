#include <stdlib.h>

int *twoSum(int *numbers, int numbersSize, int target, int *returnSize)
{
    int *result = malloc(2 * sizeof(int));
    *returnSize = 2;

    int left = 0;
    int right = numbersSize - 1;

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            result[0] = left + 1;
            result[1] = right + 1;
            return result;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return result;
}
