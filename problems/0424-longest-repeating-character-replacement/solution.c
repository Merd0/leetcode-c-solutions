int characterReplacement(char* s, int k) {
    int count[26] = {0};

    int left = 0;
    int maxFreq = 0;
    int result = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        int index = s[right] - 'A';
        count[index]++;

        if (count[index] > maxFreq) {
            maxFreq = count[index];
        }

        int windowSize = right - left + 1;

        while (windowSize - maxFreq > k) {
            count[s[left] - 'A']--;
            left++;
            windowSize = right - left + 1;
        }

        if (windowSize > result) {
            result = windowSize;
        }
    }

    return result;
}
