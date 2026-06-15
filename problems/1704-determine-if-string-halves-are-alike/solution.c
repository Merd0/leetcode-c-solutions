#include <stdbool.h>

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

bool halvesAreAlike(char* s) {
    int elemanSayisi = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        elemanSayisi++;
    }

    int ilkSira = 0;
    int ikinciSira = 0;

    for (int i = 0; i < elemanSayisi; i++) {
        if (i < elemanSayisi / 2) {
            if (isVowel(s[i])) {
                ilkSira++;
            }
        } else {
            if (isVowel(s[i])) {
                ikinciSira++;
            }
        }
    }

    return ilkSira == ikinciSira;
}
