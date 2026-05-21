int removeDuplicates(int *nums, int numsSize)
{
    int anlikSayi = nums[0];
    int index = 1;

    for (int i = 0; i < numsSize; ++i) {
        if (anlikSayi != nums[i]) {
            nums[index] = nums[i];
            anlikSayi = nums[i];
            ++index;
        }
    }

    return index;
}
