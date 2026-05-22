#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    if (x < y) {
        return -1;
    }
    if (x > y) {
        return 1;
    }
    return 0;
}

int **threeSum(int *nums, int numsSize, int *returnSize, int **returnColumnSizes)
{
    qsort(nums, numsSize, sizeof(int), compare);

    int capacity = 1000;
    int **result = malloc(capacity * sizeof(int *));
    *returnColumnSizes = malloc(capacity * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize - 2; i++) {
        /* ayni i degerini tekrar kullanma */
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result[*returnSize] = malloc(3 * sizeof(int));

                result[*returnSize][0] = nums[i];
                result[*returnSize][1] = nums[left];
                result[*returnSize][2] = nums[right];

                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;

                /* ayni left degerlerini atla */
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }

                /* ayni right degerlerini atla */
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }

                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }

            if (*returnSize >= capacity) {
                capacity *= 2;
                result = realloc(result, capacity * sizeof(int *));
                *returnColumnSizes = realloc(*returnColumnSizes,
                                             capacity * sizeof(int));
            }
        }
    }

    return result;
}
