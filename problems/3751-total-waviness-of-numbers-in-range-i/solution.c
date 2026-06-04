int waviness(int x) {
    int digits[10];
    int count = 0;

    // Split the number into digits.
    while (x > 0) {
        digits[count] = x % 10;
        x /= 10;
        count++;
    }

    // Numbers with fewer than 3 digits cannot have a peak or valley.
    if (count < 3) {
        return 0;
    }

    int wave = 0;

    // Only middle digits can be peaks or valleys.
    for (int i = 1; i < count - 1; i++) {
        if (digits[i] > digits[i - 1] && digits[i] > digits[i + 1]) {
            wave++;
        } else if (digits[i] < digits[i - 1] && digits[i] < digits[i + 1]) {
            wave++;
        }
    }

    return wave;
}

int totalWaviness(int num1, int num2) {
    int answer = 0;

    for (int i = num1; i <= num2; i++) {
        answer += waviness(i);
    }

    return answer;
}
