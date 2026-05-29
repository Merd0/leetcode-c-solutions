/*
int hammingDistance(int x, int y) {
    int diff = x ^ y;
    int count = 0;

    while (diff != 0) {
        if (diff & 1) {
            count++;
        }

        diff = diff >> 1;
    }

    return count;
}
*/

int hammingDistance(int x, int y) {
    int diff = x ^ y;
    int count = 0;

    while (diff != 0) {
        diff = diff & (diff - 1);
        count++;
    }

    return count;
}
