static int max3(int a, int b, int c) {
    int result = a;

    if (b > result) {
        result = b;
    }

    if (c > result) {
        result = c;
    }

    return result;
}

static int min3(int a, int b, int c) {
    int result = a;

    if (b < result) {
        result = b;
    }

    if (c < result) {
        result = c;
    }

    return result;
}

int maxProduct(int* nums, int numsSize) {
    int maxHere = nums[0];
    int minHere = nums[0];
    int answer = nums[0];

    for (int i = 1; i < numsSize; i++) {
        int x = nums[i];

        int option1 = x;
        int option2 = maxHere * x;
        int option3 = minHere * x;

        int newMax = max3(option1, option2, option3);
        int newMin = min3(option1, option2, option3);

        maxHere = newMax;
        minHere = newMin;

        if (maxHere > answer) {
            answer = maxHere;
        }
    }

    return answer;
}
