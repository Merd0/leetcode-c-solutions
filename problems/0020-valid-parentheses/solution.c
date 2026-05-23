#include <stdbool.h>

bool isValid(char *s)
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        /* acilan parantezleri stack'e koy */
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        } else {
            /* stack bossa direkt yanlis */
            if (top == -1) {
                return false;
            }

            /* eslesme kontrolu */
            if (s[i] == ')' && stack[top] != '(') {
                return false;
            }

            if (s[i] == ']' && stack[top] != '[') {
                return false;
            }

            if (s[i] == '}' && stack[top] != '{') {
                return false;
            }

            /* eslestiyse pop yap */
            top--;
        }
    }

    /* stack bos bittiyse dogru */
    return top == -1;
}
