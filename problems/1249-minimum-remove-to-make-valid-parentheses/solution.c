#include <string.h>

char* minRemoveToMakeValid(char* s) {
    int open = 0;
    int length = strlen(s);

    // Mark closing parentheses that have no matching opening parenthesis.
    for (int i = 0; i < length; i++) {
        if (s[i] == '(') {
            open++;
        } else if (s[i] == ')') {
            if (open == 0) {
                s[i] = '*';
            } else {
                open--;
            }
        }
    }

    // Any remaining count belongs to unmatched opening parentheses.
    for (int i = length - 1; i >= 0 && open > 0; i--) {
        if (s[i] == '(') {
            s[i] = '*';
            open--;
        }
    }

    // Compact every unmarked character into the valid output prefix.
    int write = 0;

    for (int read = 0; read < length; read++) {
        if (s[read] != '*') {
            s[write++] = s[read];
        }
    }

    s[write] = '\0';
    return s;
}
