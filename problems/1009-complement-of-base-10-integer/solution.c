int bitwiseComplement(int n) {
    if (n == 0) {
        return 1;
    }

    int mask = 1;

    // Build 1, 11, 111, ... until the mask covers every used bit of n.
    while (mask < n) {
        mask = (mask << 1) | 1;
    }

    // XOR with 1 flips a bit, so n ^ mask flips only the used bits.
    return n ^ mask;
}
