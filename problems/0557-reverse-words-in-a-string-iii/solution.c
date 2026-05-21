void reverseRange(char *s, int left, int right)
{
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

char *reverseWords(char *s)
{
    int start = 0;
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] == ' ') {
            reverseRange(s, start, i - 1);
            start = i + 1;
        }

        i++;
    }

    /* son kelimeyi ceviriyoruz cunku sonunda bosluk yok */
    reverseRange(s, start, i - 1);

    return s;
}
