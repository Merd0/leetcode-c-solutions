#include <stdlib.h>
#include <string.h>

int numberOfBeams(char** bank, int bankSize) {
    int* devicesPerRow = calloc(bankSize, sizeof(int));
    int cols = strlen(bank[0]);

    if (devicesPerRow == NULL) {
        return 0;
    }

    for (int row = 0; row < bankSize; row++) {
        for (int col = 0; col < cols; col++) {
            if (bank[row][col] == '1') {
                devicesPerRow[row]++;
            }
        }
    }

    int answer = 0;
    int previousDevices = 0;

    for (int row = 0; row < bankSize; row++) {
        if (devicesPerRow[row] == 0) {
            continue;
        }

        answer += previousDevices * devicesPerRow[row];
        previousDevices = devicesPerRow[row];
    }

    free(devicesPerRow);
    return answer;
}
