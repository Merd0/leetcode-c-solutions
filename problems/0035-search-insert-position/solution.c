int searchInsert(int *nums, int numsSize, int target)
{
    /*
     * Lower-bound binary search:
     * find the first index where nums[index] >= target.
     */
    int left = 0;
    int right = numsSize;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}
