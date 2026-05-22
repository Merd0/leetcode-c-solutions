#include <stdlib.h>
#include <string.h>

char *addStrings(char *num1, char *num2)
{
    int len1 = (int)strlen(num1);
    int len2 = (int)strlen(num2);

    int maxLen;

    if (len1 > len2) {
        maxLen = len1;
    } else {
        maxLen = len2;
    }

    /* +1 carry, +1 '\0' */
    char *result = malloc((maxLen + 2) * sizeof(char));

    int i = len1 - 1;
    int j = len2 - 1;

    int k = 0;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int digit1 = 0;
        int digit2 = 0;

        if (i >= 0) {
            digit1 = num1[i] - '0';
        }

        if (j >= 0) {
            digit2 = num2[j] - '0';
        }

        int toplam = digit1 + digit2 + carry;

        carry = toplam / 10;

        /* sonucu karakter olarak ekle */
        result[k] = (toplam % 10) + '0';

        k++;

        i--;
        j--;
    }

    result[k] = '\0';

    /* result su an tersten olustugu icin reverse edelim */
    int left = 0;
    int right = k - 1;

    while (left < right) {
        char temp = result[left];
        result[left] = result[right];
        result[right] = temp;

        left++;
        right--;
    }

    return result;
}
