#include <string.h>

int numberOfBeams(char** bank, int bankSize) {
    int cols = strlen(bank[0]);
    int previousDevices = 0;
    int answer = 0;

    for (int row = 0; row < bankSize; row++) {
        int currentDevices = 0;

        for (int col = 0; col < cols; col++) {
            if (bank[row][col] == '1') {
                currentDevices++;
            }
        }

        if (currentDevices == 0) {
            continue;
        }

        answer += previousDevices * currentDevices;
        previousDevices = currentDevices;
    }

    return answer;
}
