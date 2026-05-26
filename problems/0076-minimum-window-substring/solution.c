#include <stdlib.h>
#include <string.h>

char* minWindow(char* s, char* t) {
    int sLen = strlen(s);
    int tLen = strlen(t);

    if (tLen > sLen) {
        char* empty = malloc(1);
        empty[0] = '\0';
        return empty;
    }

    int need[128] = {0};
    int window[128] = {0};

    for (int i = 0; i < tLen; i++) {
        need[(unsigned char)t[i]]++;
    }

    int left = 0;
    int have = 0;

    int minLen = sLen + 1;
    int start = 0;

    for (int right = 0; right < sLen; right++) {
        unsigned char c = s[right];
        window[c]++;

        if (need[c] > 0 && window[c] <= need[c]) {
            have++;
        }

        while (have == tLen) {
            int len = right - left + 1;

            if (len < minLen) {
                minLen = len;
                start = left;
            }

            unsigned char leftChar = s[left];

            if (need[leftChar] > 0 && window[leftChar] <= need[leftChar]) {
                have--;
            }

            window[leftChar]--;
            left++;
        }
    }

    if (minLen == sLen + 1) {
        char* empty = malloc(1);
        empty[0] = '\0';
        return empty;
    }

    char* result = malloc(minLen + 1);

    for (int i = 0; i < minLen; i++) {
        result[i] = s[start + i];
    }

    result[minLen] = '\0';

    return result;
}
