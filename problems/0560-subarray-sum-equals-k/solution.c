#include <stdlib.h>

#define SIZE 50021

int hashKey(int key) {
    long long x = key;

    if (x < 0) {
        x = -x * 2 + 1;
    } else {
        x = x * 2;
    }

    return x % SIZE;
}

int getCount(int* keys, int* values, int* used, int key) {
    int index = hashKey(key);

    while (used[index]) {
        if (keys[index] == key) {
            return values[index];
        }

        index = (index + 1) % SIZE;
    }

    return 0;
}

void addCount(int* keys, int* values, int* used, int key) {
    int index = hashKey(key);

    while (used[index]) {
        if (keys[index] == key) {
            values[index]++;
            return;
        }

        index = (index + 1) % SIZE;
    }

    used[index] = 1;
    keys[index] = key;
    values[index] = 1;
}

int subarraySum(int* nums, int numsSize, int k) {
    int* keys = calloc(SIZE, sizeof(int));
    int* values = calloc(SIZE, sizeof(int));
    int* used = calloc(SIZE, sizeof(int));

    int prefix = 0;
    int answer = 0;

    addCount(keys, values, used, 0);

    for (int i = 0; i < numsSize; i++) {
        prefix += nums[i];

        answer += getCount(keys, values, used, prefix - k);

        addCount(keys, values, used, prefix);
    }

    free(keys);
    free(values);
    free(used);

    return answer;
}
