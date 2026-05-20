int lengthOfLongestSubstring(char *s)
{
    /*
     * Sliding window:
     * start..end always contains unique characters.
     * last_seen[ch] keeps the last index of each character.
     */
    int last_seen[256];
    int start = 0;
    int best = 0;

    for (int i = 0; i < 256; ++i) {
        last_seen[i] = -1;
    }

    for (int end = 0; s[end] != '\0'; ++end) {
        unsigned char ch = (unsigned char)s[end];

        if (last_seen[ch] >= start) {
            start = last_seen[ch] + 1;
        }

        last_seen[ch] = end;

        if (end - start + 1 > best) {
            best = end - start + 1;
        }
    }

    return best;
}
