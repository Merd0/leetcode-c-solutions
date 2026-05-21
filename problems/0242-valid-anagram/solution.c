#include <stdbool.h>

bool isAnagram(char *s, char *t)
{
    int sHarf[26] = {0};
    int tHarf[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        sHarf[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        tHarf[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (sHarf[i] != tHarf[i]) {
            return false;
        }
    }

    return true;
}
