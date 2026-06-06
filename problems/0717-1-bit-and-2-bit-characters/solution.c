#include <stdbool.h>

bool isOneBitCharacter(int* bits, int bitsSize) {
    int i = 0;

    while (i < bitsSize - 1) {
        if (bits[i] == 0) {
            i++;
        } else {
            i += 2;
        }
    }

    return i == bitsSize - 1;
}
