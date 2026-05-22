#include <stdbool.h>
#include <string.h>

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' ||
           c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' ||
           c == 'O' || c == 'U';
}

char *reverseVowels(char *s)
{
    int left = 0;
    int right = (int)strlen(s) - 1;

    while (left < right) {
        /* soldaki sesli degilse ilerle */
        while (left < right && !isVowel(s[left])) {
            left++;
        }

        /* sagdaki sesli degilse gerile */
        while (left < right && !isVowel(s[right])) {
            right--;
        }

        /* ikisi de sesliyse swap */
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }

    return s;
}
