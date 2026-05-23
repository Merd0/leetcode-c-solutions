#include <stdlib.h>
#include <string.h>

char *simplifyPath(char *path)
{
    int n = (int)strlen(path);

    /* Stack icinde klasor isimlerini tutacagiz. */
    char **stack = malloc((n + 1) * sizeof(char *));
    int top = -1;

    int i = 0;

    while (i < n) {
        /* Art arda gelen slashlari gec: '/', '//', '///' */
        while (i < n && path[i] == '/') {
            i++;
        }

        int start = i;

        while (i < n && path[i] != '/') {
            i++;
        }

        int len = i - start;

        if (len == 0) {
            continue;
        }

        if (len == 1 && path[start] == '.') {
            continue;
        }

        if (len == 2 && path[start] == '.' && path[start + 1] == '.') {
            if (top >= 0) {
                free(stack[top]);
                top--;
            }
        } else {
            char *folder = malloc((len + 1) * sizeof(char));

            for (int k = 0; k < len; k++) {
                folder[k] = path[start + k];
            }

            folder[len] = '\0';

            stack[++top] = folder;
        }
    }

    if (top == -1) {
        char *result = malloc(2 * sizeof(char));
        result[0] = '/';
        result[1] = '\0';

        free(stack);
        return result;
    }

    int totalLen = 1; /* bastaki '/' */

    for (int k = 0; k <= top; k++) {
        totalLen += (int)strlen(stack[k]);

        if (k > 0) {
            totalLen++;
        }
    }

    char *result = malloc((totalLen + 1) * sizeof(char));
    int pos = 0;

    result[pos++] = '/';

    for (int k = 0; k <= top; k++) {
        if (k > 0) {
            result[pos++] = '/';
        }

        int len = (int)strlen(stack[k]);

        for (int j = 0; j < len; j++) {
            result[pos++] = stack[k][j];
        }

        free(stack[k]);
    }

    result[pos] = '\0';

    free(stack);

    return result;
}
