#include <string.h>

int strStr(char *haystack, char *needle)
{
    int hLen = (int)strlen(haystack);
    int nLen = (int)strlen(needle);

    /* needle bossa */
    if (nLen == 0) {
        return 0;
    }

    /* needle haystack'ten uzunsa imkansiz */
    if (nLen > hLen) {
        return -1;
    }

    /* needle'in sigabilecegi son yere kadar gez */
    for (int i = 0; i <= hLen - nLen; i++) {
        int j = 0;

        while (needle[j] != '\0' && haystack[i + j] == needle[j]) {
            j++;
        }

        /* needle tamamen eslesti */
        if (needle[j] == '\0') {
            return i;
        }
    }

    return -1;
}
