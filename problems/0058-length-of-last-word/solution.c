int lengthOfLastWord(char *s)
{
    int i = 0;
    int len = 0;

    while (s[i] != '\0') {
        i++;
    }

    i--; /* son karaktere gel */

    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    while (i >= 0 && s[i] != ' ') {
        len++;
        i--;
    }

    return len;
}
