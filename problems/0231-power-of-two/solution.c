#include <stdbool.h>

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }

    while (n % 2 == 0) {
        n = n / 2;
    }

    return n == 1;
}

// tek satir icin
// return n > 0 && (n & (n - 1)) == 0;
