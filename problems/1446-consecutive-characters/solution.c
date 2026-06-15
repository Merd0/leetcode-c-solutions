int maxPower(char* s) {
    int maxAgain = 1;
    int again = 1;

    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] == s[i - 1]) {
            again++;
        } else {
            again = 1;
        }

        if (again > maxAgain) {
            maxAgain = again;
        }
    }

    return maxAgain;
}
