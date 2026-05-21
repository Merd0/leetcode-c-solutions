int removeElement(int *nums, int numsSize, int val)
{
    int index = 0;

    for (int i = 0; i < numsSize; ++i) {
        if (val != nums[i]) {
            nums[index] = nums[i];
            ++index;
        }
    }

    return index;
}
