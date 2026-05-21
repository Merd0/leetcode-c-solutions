#include <stdbool.h>

bool isSubsequence(char *s, char *t)
{
    int kaldigiIndex = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        for (; t[kaldigiIndex] != '\0'; kaldigiIndex++) {
            if (s[i] == t[kaldigiIndex]) {
                break;
            }
        }

        /* t bittiyse, bu s[i] harfi bulunamamistir */
        if (t[kaldigiIndex] == '\0') {
            return false;
        }

        /* harf bulundu, sonraki arama bunun sonrasindan baslasin */
        kaldigiIndex++;
    }

    return true;
}
