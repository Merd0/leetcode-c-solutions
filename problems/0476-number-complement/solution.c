int findComplement(int num) {
    int basamakCount = 0;
    int temp = num;

    while (temp != 0) {
        temp = temp >> 1;
        basamakCount++;
    }

    int mask = 0;

    for (int i = 0; i < basamakCount; i++) {
        mask = (mask << 1) | 1;
    }

    return num ^ mask;
}
