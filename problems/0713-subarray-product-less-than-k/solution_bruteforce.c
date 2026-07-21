int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
    int answer = 0;

    if (k <= 1) {
        return 0;
    }

    for (int left = 0; left < numsSize; left++) {
        long long product = 1;

        for (int right = left; right < numsSize; right++) {
            product *= nums[right];

            // Positive values can only keep or increase the product.
            if (product >= k) {
                break;
            }

            answer++;
        }
    }

    return answer;
}
