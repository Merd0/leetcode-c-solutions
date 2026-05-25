#include <stdbool.h>

bool isPerfectSquare(int num) {
    int left = 1;
    int right = num;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (num / mid == mid && num % mid == 0) {
            return true;
        } else if (mid > num / mid) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return false;
}
