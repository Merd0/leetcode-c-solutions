int largestAltitude(int* gain, int gainSize) {
    int maxHigh = 0;
    int currHigh = 0;

    for (int i = 0; i < gainSize; i++) {
        currHigh += gain[i];

        if (currHigh > maxHigh) {
            maxHigh = currHigh;
        }
    }

    return maxHigh;
}
