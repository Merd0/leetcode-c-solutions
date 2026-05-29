#include <stdint.h>

uint32_t reverseBits(uint32_t n) {
    uint32_t reverseN = 0;
    uint32_t bit = 0;

    for (int i = 0; i < 32; i++) {
        bit = n & 1;
        reverseN = (reverseN << 1) | bit;
        n = n >> 1;
    }

    return reverseN;
}
