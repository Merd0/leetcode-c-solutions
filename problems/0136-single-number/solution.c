int singleNumber(int *nums, int numsSize)
{
    int sonuc = 0;

    for (int i = 0; i < numsSize; ++i) {
        sonuc ^= nums[i];
    }

    return sonuc;
}
