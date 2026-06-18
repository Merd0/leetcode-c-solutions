int countTriples(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int z = 1; z <= n; z++) {
                if (i * i + j * j == z * z) {
                    count++;
                }
            }
        }
    }

    return count;
}
