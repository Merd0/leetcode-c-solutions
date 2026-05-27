#include <string.h>

int numberOfSpecialChars(char* word) {
    int lastLower[26];
    int firstUpper[26];

    for (int i = 0; i < 26; i++) {
        lastLower[i] = -1;      // lowercase form has not appeared yet
        firstUpper[i] = 100000; // uppercase form has not appeared yet
    }

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            lastLower[word[i] - 'a'] = i;
        }
        else if (word[i] >= 'A' && word[i] <= 'Z') {
            int index = word[i] - 'A';

            if (firstUpper[index] == 100000) {
                firstUpper[index] = i;
            }
        }
    }

    int answer = 0;

    for (int i = 0; i < 26; i++) {
        if (lastLower[i] != -1 && firstUpper[i] != 100000) {
            if (lastLower[i] < firstUpper[i]) {
                answer++;
            }
        }
    }

    return answer;
}
