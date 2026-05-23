#include <stdbool.h>
#include <string.h>

bool backspaceCompare(char *s, char *t)
{
    char cleanS[201];
    char cleanT[201];

    int top = -1;

    /* s'yi isle */
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '#') {
            if (top >= 0) {
                top--;
            }
        } else {
            cleanS[++top] = s[i];
        }
    }
    cleanS[top + 1] = '\0';

    /* t icin top'u sifirla */
    top = -1;

    /* t'yi isle */
    for (int i = 0; t[i] != '\0'; i++) {
        if (t[i] == '#') {
            if (top >= 0) {
                top--;
            }
        } else {
            cleanT[++top] = t[i];
        }
    }
    cleanT[top + 1] = '\0';

    return strcmp(cleanS, cleanT) == 0;
}
