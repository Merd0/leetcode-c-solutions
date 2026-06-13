#include <stdbool.h>

int countConsistentStrings(char * allowed, char ** words, int wordsSize) {
    int result = 0;
    int allowedArr[26] = {0};

    for (int z = 0; allowed[z] != '\0'; z++) {
        allowedArr[allowed[z] - 'a'] = 1;
    }

    for (int i = 0; i < wordsSize; i++) {
        bool valid = true;

        for (int j = 0; words[i][j] != '\0'; j++) {
            if (allowedArr[words[i][j] - 'a'] == 0) {
                valid = false;
                break;
            }
        }

        if (valid) {
            result++;
        }
    }

    return result;
}
