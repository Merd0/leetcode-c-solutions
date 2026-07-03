int maximumCount(int *nums, int numsSize)
{
    int left = 0;
    int right = numsSize - 1;
    int first_non_negative = numsSize;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] >= 0) {
            first_non_negative = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    left = 0;
    right = numsSize - 1;
    int first_positive = numsSize;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > 0) {
            first_positive = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    int negative = first_non_negative;
    int positive = numsSize - first_positive;

    if (positive > negative) {
        return positive;
    }

    return negative;
}
