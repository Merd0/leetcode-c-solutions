#include <stdbool.h>

bool isHappy(int n) {
    int seen[1000] = {0};

    while (n != 1) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        n = sum;

        if (seen[n] == 1) {
            return false;
        }

        seen[n] = 1;
    }

    return true;
}
