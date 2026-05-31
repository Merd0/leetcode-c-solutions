#include <stdbool.h>

bool hasAlternatingBits(int n) {
    int last = n & 1;
    n = n >> 1;

    while (n > 0) {
        int current = n & 1;

        if (current == last) {
            return false;
        }

        last = current;
        n = n >> 1;
    }

    return true;
}
