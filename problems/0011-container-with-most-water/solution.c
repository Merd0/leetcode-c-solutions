int maxArea(int *height, int heightSize)
{
    int left = 0;
    int right = heightSize - 1;
    int max = 0;

    while (left < right) {
        int width = right - left;

        int shorter;
        if (height[left] < height[right]) {
            shorter = height[left];
        } else {
            shorter = height[right];
        }

        int area = width * shorter;

        if (area > max) {
            max = area;
        }

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max;
}
