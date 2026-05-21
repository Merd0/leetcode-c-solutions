void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    (void)nums1Size;
    (void)nums2Size;

    int i = m - 1;      /* nums1'in gercek son elemani */
    int j = n - 1;      /* nums2'nin son elemani */
    int k = m + n - 1;  /* nums1'in en son bos yeri */

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            --i;
        } else {
            nums1[k] = nums2[j];
            --j;
        }
        --k;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
        --j;
        --k;
    }
}
