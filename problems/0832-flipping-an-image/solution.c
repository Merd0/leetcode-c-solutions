#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced,
 * assume caller calls free().
 */
int** flipAndInvertImage(int** image,
                         int imageSize,
                         int* imageColSize,
                         int* returnSize,
                         int** returnColumnSizes)
{
    *returnSize = imageSize;
    *returnColumnSizes = malloc((size_t)imageSize * sizeof(int));

    for (int i = 0; i < imageSize; i++) {
        int cols = imageColSize[i];
        (*returnColumnSizes)[i] = cols;

        int left = 0;
        int right = cols - 1;

        while (left <= right) {
            int temp = image[i][left] ^ 1;

            image[i][left] = image[i][right] ^ 1;
            image[i][right] = temp;

            left++;
            right--;
        }
    }

    return image;
}
