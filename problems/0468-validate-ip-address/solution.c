#include <string.h>

int isIPv4(char* s) {
    for (int part = 0; part < 4; part++) {
        int num = 0;
        int len = 0;
        char* start = s;

        while (*s != '\0' && *s != '.') {
            if (*s < '0' || *s > '9') return 0;

            num = num * 10 + (*s - '0');
            len++;

            if (num > 255) return 0;
            s++;
        }

        if (len == 0) return 0;
        if (len > 1 && *start == '0') return 0;

        if (part < 3) {
            if (*s != '.') return 0;
            s++;
        }
    }

    return *s == '\0';
}

int isIPv6(char* s) {
    for (int part = 0; part < 8; part++) {
        int len = 0;

        while (*s != '\0' && *s != ':') {
            char c = *s;

            if (!((c >= '0' && c <= '9') ||
                  (c >= 'a' && c <= 'f') ||
                  (c >= 'A' && c <= 'F'))) {
                return 0;
            }

            len++;
            if (len > 4) return 0;

            s++;
        }

        if (len == 0) return 0;

        if (part < 7) {
            if (*s != ':') return 0;
            s++;
        }
    }

    return *s == '\0';
}

char* validIPAddress(char* queryIP) {
    if (strchr(queryIP, '.') != NULL) {
        return isIPv4(queryIP) ? "IPv4" : "Neither";
    }

    if (strchr(queryIP, ':') != NULL) {
        return isIPv6(queryIP) ? "IPv6" : "Neither";
    }

    return "Neither";
}
