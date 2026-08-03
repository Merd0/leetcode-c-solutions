#include <string.h>

int countPoints(char* rings) {
    int rodColors[10][3] = {0};
    int length = strlen(rings);

    for (int i = 0; i < length; i += 2) {
        char color = rings[i];
        int rod = rings[i + 1] - '0';

        if (color == 'R') {
            rodColors[rod][0] = 1;
        } else if (color == 'G') {
            rodColors[rod][1] = 1;
        } else {
            rodColors[rod][2] = 1;
        }
    }

    int count = 0;

    for (int rod = 0; rod < 10; rod++) {
        if (rodColors[rod][0] &&
            rodColors[rod][1] &&
            rodColors[rod][2]) {
            count++;
        }
    }

    return count;
}
