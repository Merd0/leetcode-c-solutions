int robotSim(int* commands, int commandsSize,
             int** obstacles, int obstaclesSize, int* obstaclesColSize) {
    (void)obstaclesColSize;

    int x = 0;
    int y = 0;
    int dir = 0;
    int maxDist = 0;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    for (int i = 0; i < commandsSize; i++) {
        if (commands[i] == -1) {
            dir = (dir + 1) % 4;
        } else if (commands[i] == -2) {
            dir = (dir + 3) % 4;
        } else {
            for (int step = 0; step < commands[i]; step++) {
                int nextX = x + dx[dir];
                int nextY = y + dy[dir];
                int blocked = 0;

                // Simple version: scan every obstacle for this next cell.
                for (int j = 0; j < obstaclesSize; j++) {
                    if (obstacles[j][0] == nextX && obstacles[j][1] == nextY) {
                        blocked = 1;
                        break;
                    }
                }

                if (blocked) {
                    break;
                }

                x = nextX;
                y = nextY;

                int dist = x * x + y * y;
                if (dist > maxDist) {
                    maxDist = dist;
                }
            }
        }
    }

    return maxDist;
}
