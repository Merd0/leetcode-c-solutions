static int vowel_bit(char c)
{
    if (c == 'a') return 1;
    if (c == 'e') return 2;
    if (c == 'i') return 4;
    if (c == 'o') return 8;
    if (c == 'u') return 16;

    return 0;
}

int findTheLongestSubstring(char *s)
{
    int first[32];

    for (int i = 0; i < 32; i++) {
        first[i] = -2;
    }

    first[0] = -1;

    int mask = 0;
    int max_len = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int bit = vowel_bit(s[i]);

        if (bit != 0) {
            mask ^= bit;
        }

        if (first[mask] == -2) {
            first[mask] = i;
        } else {
            int len = i - first[mask];

            if (len > max_len) {
                max_len = len;
            }
        }
    }

    return max_len;
}
