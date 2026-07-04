#include <stdbool.h>

bool checkOnesSegment(char *s)
{
    bool zero_seen = false;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '0') {
            zero_seen = true;
        }

        if (s[i] == '1' && zero_seen) {
            return false;
        }
    }

    return true;
}
