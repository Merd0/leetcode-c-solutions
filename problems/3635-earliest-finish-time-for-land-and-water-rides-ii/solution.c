#include <limits.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int earliestFinishTime(
    int* landStartTime, int landStartTimeSize,
    int* landDuration, int landDurationSize,
    int* waterStartTime, int waterStartTimeSize,
    int* waterDuration, int waterDurationSize
) {
    int minLandEnd = INT_MAX;
    int minWaterEnd = INT_MAX;

    // En erken biten land ride.
    for (int i = 0; i < landStartTimeSize; i++) {
        int end = landStartTime[i] + landDuration[i];

        if (end < minLandEnd) {
            minLandEnd = end;
        }
    }

    // En erken biten water ride.
    for (int i = 0; i < waterStartTimeSize; i++) {
        int end = waterStartTime[i] + waterDuration[i];

        if (end < minWaterEnd) {
            minWaterEnd = end;
        }
    }

    int answer = INT_MAX;

    // land -> water
    for (int i = 0; i < waterStartTimeSize; i++) {
        int start = max(minLandEnd, waterStartTime[i]);
        int finish = start + waterDuration[i];

        if (finish < answer) {
            answer = finish;
        }
    }

    // water -> land
    for (int i = 0; i < landStartTimeSize; i++) {
        int start = max(minWaterEnd, landStartTime[i]);
        int finish = start + landDuration[i];

        if (finish < answer) {
            answer = finish;
        }
    }

    return answer;
}
