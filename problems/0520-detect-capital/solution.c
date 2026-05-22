#include <stdbool.h>
#include <string.h>

bool detectCapitalUse(char *word)
{
    int buyukSayisi = 0;
    int uzunluk = (int)strlen(word);

    /* Buyuk harfleri say */
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            buyukSayisi++;
        }
    }

    /* Hepsi buyuk */
    if (buyukSayisi == uzunluk) {
        return true;
    }

    /* Hepsi kucuk */
    if (buyukSayisi == 0) {
        return true;
    }

    /* Sadece ilk harf buyuk */
    if (buyukSayisi == 1 &&
        word[0] >= 'A' && word[0] <= 'Z') {
        return true;
    }

    return false;
}
