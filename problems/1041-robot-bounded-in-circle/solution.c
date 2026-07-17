#include <stdbool.h>
#include <string.h>

bool isRobotBounded(char* instructions) {
    int n = strlen(instructions);
    int x = 0;
    int y = 0;
    int dir = 0;

    // Direction state: 0=N, 1=E, 2=S, 3=W.
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    for (int i = 0; i < n; i++) {
        if (instructions[i] == 'G') {
            x += dx[dir];
            y += dy[dir];
        } else if (instructions[i] == 'L') {
            dir = (dir + 3) % 4;
        } else if (instructions[i] == 'R') {
            dir = (dir + 1) % 4;
        }
    }

    return (x == 0 && y == 0) || dir != 0;
}
