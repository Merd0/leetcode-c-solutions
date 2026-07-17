#include <stdlib.h>

static int compareLongLong(const void* a, const void* b) {
    long long x = *(const long long*)a;
    long long y = *(const long long*)b;

    if (x < y) {
        return -1;
    }

    if (x > y) {
        return 1;
    }

    return 0;
}

static long long encode(int x, int y) {
    return (long long)(x + 30000) * 60001LL + (y + 30000);
}

static int containsObstacle(long long* keys, int size, long long target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (keys[mid] == target) {
            return 1;
        }

        if (keys[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return 0;
}

int robotSim(int* commands, int commandsSize,
             int** obstacles, int obstaclesSize, int* obstaclesColSize) {
    (void)obstaclesColSize;

    long long* obstacleKeys = malloc(obstaclesSize * sizeof(long long));

    for (int i = 0; i < obstaclesSize; i++) {
        obstacleKeys[i] = encode(obstacles[i][0], obstacles[i][1]);
    }

    qsort(obstacleKeys, obstaclesSize, sizeof(long long), compareLongLong);

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
                long long key = encode(nextX, nextY);

                // Sorted encoded keys make obstacle lookup a binary search.
                if (containsObstacle(obstacleKeys, obstaclesSize, key)) {
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

    free(obstacleKeys);
    return maxDist;
}
