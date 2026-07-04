int minOperations(char *s)
{
    int change_to_0101 = 0;
    int change_to_1010 = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char expected_0101;
        char expected_1010;

        if (i % 2 == 0) {
            expected_0101 = '0';
            expected_1010 = '1';
        } else {
            expected_0101 = '1';
            expected_1010 = '0';
        }

        if (s[i] != expected_0101) {
            change_to_0101++;
        }

        if (s[i] != expected_1010) {
            change_to_1010++;
        }
    }

    if (change_to_0101 < change_to_1010) {
        return change_to_0101;
    }

    return change_to_1010;
}
