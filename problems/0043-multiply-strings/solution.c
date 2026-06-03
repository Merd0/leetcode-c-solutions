#include <stdlib.h>
#include <string.h>

char* multiply(char* num1, char* num2) {
    if (strcmp(num1, "0") == 0 || strcmp(num2, "0") == 0) {
        char* zero = malloc(2 * sizeof(char));
        zero[0] = '0';
        zero[1] = '\0';
        return zero;
    }

    int len1 = strlen(num1);
    int len2 = strlen(num2);

    int size = len1 + len2;
    int* result = calloc(size, sizeof(int));

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';

            int mul = digit1 * digit2;

            int p1 = i + j;
            int p2 = i + j + 1;

            int sum = mul + result[p2];

            result[p2] = sum % 10;
            result[p1] += sum / 10;
        }
    }

    int start = 0;

    while (start < size && result[start] == 0) {
        start++;
    }

    char* answer = malloc((size - start + 1) * sizeof(char));
    int index = 0;

    for (int i = start; i < size; i++) {
        answer[index] = result[i] + '0';
        index++;
    }

    answer[index] = '\0';

    free(result);

    return answer;
}
