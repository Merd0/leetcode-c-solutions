#include <string.h>

char* firstPalindrome(char** words, int wordsSize) {
    for (int i = 0; i < wordsSize; i++) {
        int left = 0;
        int right = (int)strlen(words[i]) - 1;
        int isPalindrome = 1;

        while (left < right) {
            if (words[i][left] != words[i][right]) {
                isPalindrome = 0;
                break;
            }

            left++;
            right--;
        }

        if (isPalindrome) {
            return words[i];
        }
    }

    return "";
}
