int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    int time = duration;

    for (int i = 1; i < timeSeriesSize; i++) {
        int diff = timeSeries[i] - timeSeries[i - 1];

        // Overlap: the new attack extends the active poison window by diff.
        if (diff < duration) {
            time += diff;
        } else {
            // No overlap: the previous poison window ended before this attack.
            time += duration;
        }
    }

    return time;
}
