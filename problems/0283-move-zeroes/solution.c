void moveZeroes(int *nums, int numsSize)
{
    /*
     * First write all non-zero values in order.
     * Then fill the rest of the array with zeroes.
     */
    int write = 0;

    for (int read = 0; read < numsSize; ++read) {
        if (nums[read] != 0) {
            nums[write] = nums[read];
            ++write;
        }
    }

    while (write < numsSize) {
        nums[write] = 0;
        ++write;
    }
}
