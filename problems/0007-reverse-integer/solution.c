int reverse(int x) {
    int reverseX = 0;

    while (x != 0) {
        int digit = x % 10;
        x = x / 10;

        if (reverseX > 214748364 || (reverseX == 214748364 && digit > 7)) {
            return 0;
        }

        if (reverseX < -214748364 || (reverseX == -214748364 && digit < -8)) {
            return 0;
        }

        reverseX = reverseX * 10 + digit;
    }

    return reverseX;
}
