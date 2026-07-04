#include <stdbool.h>
#include <stdlib.h>

bool hasAllCodes(char *s, int k)
{
    int total = 1 << k;
    int mask = total - 1;

    int *seen = calloc((size_t)total, sizeof(*seen));
    if (seen == NULL) {
        return false;
    }

    int seen_count = 0;
    int window = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int bit = s[i] - '0';

        window = ((window << 1) | bit) & mask;

        if (i >= k - 1 && seen[window] == 0) {
            seen[window] = 1;
            seen_count++;

            if (seen_count == total) {
                free(seen);
                return true;
            }
        }
    }

    free(seen);
    return false;
}
