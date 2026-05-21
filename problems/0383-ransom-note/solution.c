#include <stdbool.h>

bool canConstruct(char *ransomNote, char *magazine)
{
    int countRansom[26] = {0};
    int countMagazine[26] = {0};

    for (int i = 0; ransomNote[i] != '\0'; i++) {
        countRansom[ransomNote[i] - 'a']++;
    }

    for (int i = 0; magazine[i] != '\0'; i++) {
        countMagazine[magazine[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (countMagazine[i] < countRansom[i]) {
            return false;
        }
    }

    return true;
}
