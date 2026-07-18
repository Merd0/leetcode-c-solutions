#include <stdbool.h>
#include <string.h>

bool judgeCircle(char* moves) {
    int x = 0;
    int y = 0;
    int n = strlen(moves);

    for (int i = 0; i < n; i++) {
        if (moves[i] == 'R') {
            x++;
        } else if (moves[i] == 'L') {
            x--;
        } else if (moves[i] == 'U') {
            y++;
        } else {
            y--;
        }
    }

    return x == 0 && y == 0;
}
