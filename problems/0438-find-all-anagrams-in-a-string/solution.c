#include <stdlib.h>
#include <string.h>

int sameCount(int* a, int* b) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

int* findAnagrams(char* s, char* p, int* returnSize) {
    int sLen = strlen(s);
    int pLen = strlen(p);

    *returnSize = 0;

    int* result = malloc(sizeof(int) * sLen);

    if (pLen > sLen) {
        return result;
    }

    int countP[26] = {0};
    int countS[26] = {0};

    // Build the first window with length pLen.
    for (int i = 0; i < pLen; i++) {
        countP[p[i] - 'a']++;
        countS[s[i] - 'a']++;
    }

    if (sameCount(countP, countS)) {
        result[*returnSize] = 0;
        (*returnSize)++;
    }

    // Slide the window to the right.
    for (int right = pLen; right < sLen; right++) {
        countS[s[right] - 'a']++;

        int left = right - pLen;
        countS[s[left] - 'a']--;

        int startIndex = left + 1;

        if (sameCount(countP, countS)) {
            result[*returnSize] = startIndex;
            (*returnSize)++;
        }
    }

    return result;
}
