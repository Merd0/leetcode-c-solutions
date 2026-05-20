void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    (void)nums1Size;
    (void)nums2Size;

    /*
     * Merge from the end.
     * This prevents overwriting the useful values still inside nums1.
     */
    int write = m + n - 1;
    int left = m - 1;
    int right = n - 1;

    while (right >= 0) {
        if (left >= 0 && nums1[left] > nums2[right]) {
            nums1[write] = nums1[left];
            --left;
        } else {
            nums1[write] = nums2[right];
            --right;
        }

        --write;
    }
}
