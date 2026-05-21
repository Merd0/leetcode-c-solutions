int firstUniqChar(char *s)
{
    int count[26] = {0};

    /* 1. Tur: Her harfin kac kere gectigini say */
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    /* 2. Tur: Bastan gez, sayisi 1 olan ilk harfin indexini dondur */
    for (int i = 0; s[i] != '\0'; i++) {
        if (count[s[i] - 'a'] == 1) {
            return i;
        }
    }

    /* Hic unique karakter yoksa */
    return -1;
}
