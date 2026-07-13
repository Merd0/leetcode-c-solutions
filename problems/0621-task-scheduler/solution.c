int leastInterval(char* tasks, int tasksSize, int n) {
    int freq[26] = {0};

    // Count how many times each task label appears.
    for (int i = 0; i < tasksSize; i++) {
        int index = tasks[i] - 'A';
        freq[index]++;
    }

    int maxFreq = 0;
    int maxCount = 0;

    // The most frequent task creates the required cooldown skeleton.
    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
        }
    }

    // Multiple task labels can share the same maximum frequency.
    for (int i = 0; i < 26; i++) {
        if (freq[i] == maxFreq) {
            maxCount++;
        }
    }

    // maxFreq - 1 cooldown blocks, each shaped like: task + n slots.
    // maxCount fills the final group of the busiest task labels.
    int skeleton = (maxFreq - 1) * (n + 1) + maxCount;

    if (skeleton < tasksSize) {
        return tasksSize;
    }

    return skeleton;
}
