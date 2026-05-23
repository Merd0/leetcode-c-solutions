#include <stdlib.h>

int *nextGreaterElement(int *nums1,
                        int nums1Size,
                        int *nums2,
                        int nums2Size,
                        int *returnSize)
{
    int *result = malloc(nums1Size * sizeof(int));

    *returnSize = nums1Size;

    for (int i = 0; i < nums1Size; i++) {
        result[i] = -1; /* bastan bulamadik kabul et */

        for (int j = 0; j < nums2Size; j++) {
            if (nums1[i] == nums2[j]) {
                /* nums2'de bulundugu yerden saga bak */
                for (int k = j + 1; k < nums2Size; k++) {
                    if (nums2[k] > nums1[i]) {
                        result[i] = nums2[k];
                        break;
                    }
                }

                break;
            }
        }
    }

    return result;
}
