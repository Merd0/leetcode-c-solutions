int minimumPairRemoval(int* nums, int numsSize) {
    int islem = 0;
    int size = numsSize;

    while (1) {
        int sirali = 1;

        for (int i = 0; i < size - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                sirali = 0;
                break;
            }
        }

        if (sirali) {
            return islem;
        }

        int minIndex = 0;
        int minSum = nums[0] + nums[1];

        for (int i = 1; i < size - 1; i++) {
            int sum = nums[i] + nums[i + 1];

            if (sum < minSum) {
                minSum = sum;
                minIndex = i;
            }
        }

        nums[minIndex] = nums[minIndex] + nums[minIndex + 1];

        for (int j = minIndex + 1; j < size - 1; j++) {
            nums[j] = nums[j + 1];
        }

        size--;
        islem++;
    }
}
