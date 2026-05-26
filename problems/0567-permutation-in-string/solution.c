#include <stdbool.h>
#include <string.h>

bool sameCount(int* a, int* b) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

bool checkInclusion(char* s1, char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 > len2) {
        return false;
    }

    int count1[26] = {0};
    int count2[26] = {0};

    for (int i = 0; i < len1; i++) {
        count1[s1[i] - 'a']++;
        count2[s2[i] - 'a']++;
    }

    if (sameCount(count1, count2)) {
        return true;
    }

    for (int right = len1; right < len2; right++) {
        count2[s2[right] - 'a']++;

        int left = right - len1;
        count2[s2[left] - 'a']--;

        if (sameCount(count1, count2)) {
            return true;
        }
    }

    return false;
}
