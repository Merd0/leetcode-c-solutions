#include <stdlib.h>
#include <string.h>

char* removeDuplicates(char* s, int k) {
    int n = strlen(s);
    int* count = malloc(n * sizeof(int));
    int write = 0;

    for (int i = 0; i < n; i++) {
        s[write] = s[i];

        // count[write] is the run length ending at this stack position.
        if (write > 0 && s[write] == s[write - 1]) {
            count[write] = count[write - 1] + 1;
        } else {
            count[write] = 1;
        }

        write++;

        // Pop the last k characters. Old bytes remain but are no longer valid.
        if (count[write - 1] == k) {
            write -= k;
        }
    }

    s[write] = '\0';
    free(count);

    return s;
}
