#include <stdbool.h>

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    int i = 0;
    int j = 0;
    int x = 0;
    int y = 0;

    while (i < word1Size && x < word2Size) {
        if (word1[i][j] != word2[x][y]) {
            return false;
        }

        j++;
        y++;

        if (word1[i][j] == '\0') {
            i++;
            j = 0;
        }

        if (word2[x][y] == '\0') {
            x++;
            y = 0;
        }
    }

    return i == word1Size && x == word2Size;
}
