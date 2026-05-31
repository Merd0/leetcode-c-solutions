int binaryGap(int n) {
    int maxGap = 0;
    int pos = 0;
    int lastOne = -1;

    while (n > 0) {
        if ((n & 1) == 1) {
            if (lastOne != -1) {
                int gap = pos - lastOne;

                if (gap > maxGap) {
                    maxGap = gap;
                }
            }

            lastOne = pos;
        }

        n = n >> 1;
        pos++;
    }

    return maxGap;
}
