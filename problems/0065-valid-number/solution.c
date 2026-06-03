#include <stdbool.h>

bool isNumber(char* s) {
    int digitSeen = 0;
    int dotSeen = 0;
    int eSeen = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c >= '0' && c <= '9') {
            digitSeen = 1;
        }
        else if (c == '.') {
            if (dotSeen || eSeen) {
                return false;
            }
            dotSeen = 1;
        }
        else if (c == 'e' || c == 'E') {
            if (eSeen || !digitSeen) {
                return false;
            }

            eSeen = 1;
            digitSeen = 0;
        }
        else if (c == '+' || c == '-') {
            if (i != 0 && s[i - 1] != 'e' && s[i - 1] != 'E') {
                return false;
            }
        }
        else {
            return false;
        }
    }

    return digitSeen;
}
