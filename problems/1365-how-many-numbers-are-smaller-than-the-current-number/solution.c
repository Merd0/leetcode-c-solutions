#include <stdlib.h>

int *smallerNumbersThanCurrent(int *nums, int numsSize, int *returnSize)
{
    int tekrarSayi = 0;
    int anlikSayi;

    int *yDizi = calloc((size_t)numsSize, sizeof(int));
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; ++i) {
        anlikSayi = nums[i];
        tekrarSayi = 0;

        for (int j = 0; j < numsSize; ++j) {
            if (anlikSayi > nums[j]) {
                ++tekrarSayi;
            }
        }

        yDizi[i] = tekrarSayi;
    }

    return yDizi;
}

/*
 * Alternative optimized solution:
 *
 * int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
 *     int* yDizi = malloc(numsSize * sizeof(int));
 *
 *     *returnSize = numsSize;
 *
 *     int count[101] = {0};
 *
 *     // Her sayinin kac kere gectigini sayiyoruz.
 *     for (int i = 0; i < numsSize; i++) {
 *         count[nums[i]]++;
 *     }
 *
 *     // count[i] artik i'ye kadar kac sayi oldugunu tutacak.
 *     for (int i = 1; i <= 100; i++) {
 *         count[i] += count[i - 1];
 *     }
 *
 *     // nums[i]'den kucuk olanlar:
 *     // nums[i] = x ise, x'ten kucukler count[x - 1]'de durur.
 *     for (int i = 0; i < numsSize; i++) {
 *         if (nums[i] == 0) {
 *             yDizi[i] = 0;
 *         } else {
 *             yDizi[i] = count[nums[i] - 1];
 *         }
 *     }
 *
 *     return yDizi;
 * }
 */
