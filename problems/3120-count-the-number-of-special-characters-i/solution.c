#include <string.h>

int numberOfSpecialChars(char* word) {
    int wordSize = strlen(word);

    int lower[26] = {0};
    int upper[26] = {0};

    for (int i = 0; i < wordSize; i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            lower[word[i] - 'a'] = 1;
        }
        else if (word[i] >= 'A' && word[i] <= 'Z') {
            upper[word[i] - 'A'] = 1;
        }
    }

    int answer = 0;

    for (int i = 0; i < 26; i++) {
        if (lower[i] == 1 && upper[i] == 1) {
            answer++;
        }
    }

    return answer;
}
