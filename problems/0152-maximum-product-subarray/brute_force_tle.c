int maxProduct(int* nums, int numsSize) {
    int maxProduct = nums[0];

    for (int start = 0; start < numsSize; start++) {
        int product = 1;

        for (int end = start; end < numsSize; end++) {
            product *= nums[end];

            if (product > maxProduct) {
                maxProduct = product;
            }
        }
    }

    return maxProduct;
}
