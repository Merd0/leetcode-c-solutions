#include <stdbool.h>
#include <string.h>

bool wordPattern(char *pattern, char *s)
{
    /*
     * pattern sadece kucuk harflerden olusuyor: a-z
     * map[0] -> 'a' hangi kelimeye bagli?
     */
    char *map[26] = {0};

    /* strtok string'i bosluklara gore parcalar. Ilk kelimeyi aliyoruz. */
    char *word = strtok(s, " ");

    int i = 0; /* pattern icinde hangi harfteyiz? */

    while (word != NULL) {
        /* Kelime var ama pattern bittiyse eslesme bozulur. */
        if (pattern[i] == '\0') {
            return false;
        }

        int index = pattern[i] - 'a';

        if (map[index] == NULL) {
            /*
             * Bu kelime baska bir harfe verildiyse iki farkli harf
             * ayni kelimeye gitmis olur.
             */
            for (int j = 0; j < 26; j++) {
                if (map[j] != NULL && strcmp(map[j], word) == 0) {
                    return false;
                }
            }

            map[index] = word;
        } else {
            if (strcmp(map[index], word) != 0) {
                return false;
            }
        }

        i++;
        word = strtok(NULL, " ");
    }

    /* Kelimeler bitti ama pattern hala bitmediyse eslesme eksik kalir. */
    if (pattern[i] != '\0') {
        return false;
    }

    return true;
}
