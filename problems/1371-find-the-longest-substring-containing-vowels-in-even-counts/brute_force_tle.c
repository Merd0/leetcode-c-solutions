#include <stdbool.h>

static int vowel_index(char c)
{
    if (c == 'a') return 0;
    if (c == 'e') return 1;
    if (c == 'i') return 2;
    if (c == 'o') return 3;
    if (c == 'u') return 4;

    return -1;
}

int findTheLongestSubstring(char *s)
{
    int max_len = 0;

    for (int start = 0; s[start] != '\0'; start++) {
        int vowels[5] = {0};

        for (int end = start; s[end] != '\0'; end++) {
            int index = vowel_index(s[end]);

            if (index != -1) {
                vowels[index]++;
            }

            bool all_even = true;

            for (int i = 0; i < 5; i++) {
                if (vowels[i] % 2 != 0) {
                    all_even = false;
                    break;
                }
            }

            if (all_even) {
                int len = end - start + 1;

                if (len > max_len) {
                    max_len = len;
                }
            }
        }
    }

    return max_len;
}
