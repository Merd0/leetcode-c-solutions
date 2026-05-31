int minBitFlips(int start, int goal) {
    int diff = start ^ goal;
    int count = 0;

    while (diff > 0) {
        diff = diff & (diff - 1);
        count++;
    }

    return count;
}
