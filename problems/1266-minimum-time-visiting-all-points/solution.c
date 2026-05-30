int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    int answer = 0;

    for (int i = 0; i < pointsSize - 1; i++) {
        int x1 = points[i][0];
        int y1 = points[i][1];

        int x2 = points[i + 1][0];
        int y2 = points[i + 1][1];

        int dx = x2 - x1;
        int dy = y2 - y1;

        if (dx < 0) dx = -dx;
        if (dy < 0) dy = -dy;

        if (dx > dy) {
            answer += dx;
        } else {
            answer += dy;
        }
    }

    return answer;
}
