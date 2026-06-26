static void swap(int* left, int* right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}

void sortColors(int* nums, int numsSize) {
    int low = 0;
    int current = 0;
    int high = numsSize - 1;

    while (current <= high) {
        if (nums[current] == 0) {
            swap(&nums[low], &nums[current]);
            low++;
            current++;
        } else if (nums[current] == 1) {
            current++;
        } else {
            swap(&nums[current], &nums[high]);
            high--;
        }
    }
}
