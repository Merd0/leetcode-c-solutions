int lengthOfLongestSubstring(char *s)
{
    int last[256];

    for (int i = 0; i < 256; ++i) {
        last[i] = -1;
    }

    int left = 0;
    int maxLen = 0;

    for (int right = 0; s[right] != '\0'; ++right) {
        unsigned char ch = (unsigned char)s[right];

        if (last[ch] >= left) {
            left = last[ch] + 1;
        }

        last[ch] = right;

        int currentLen = right - left + 1;

        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    return maxLen;
}
