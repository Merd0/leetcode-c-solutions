#include <limits.h>

int earliestFinishTime(
    int* landStartTime, int landStartTimeSize,
    int* landDuration, int landDurationSize,
    int* waterStartTime, int waterStartTimeSize,
    int* waterDuration, int waterDurationSize
) {
    int answer = INT_MAX;

    for (int i = 0; i < landStartTimeSize; i++) {
        for (int j = 0; j < waterStartTimeSize; j++) {
            // 1. ihtimal: once kara, sonra su.
            int landEnd = landStartTime[i] + landDuration[i];

            int waterBegin;
            if (landEnd > waterStartTime[j]) {
                waterBegin = landEnd;
            } else {
                waterBegin = waterStartTime[j];
            }

            int finish1 = waterBegin + waterDuration[j];

            // 2. ihtimal: once su, sonra kara.
            int waterEnd = waterStartTime[j] + waterDuration[j];

            int landBegin;
            if (waterEnd > landStartTime[i]) {
                landBegin = waterEnd;
            } else {
                landBegin = landStartTime[i];
            }

            int finish2 = landBegin + landDuration[i];

            // Minimum cevabi guncelle.
            if (finish1 < answer) {
                answer = finish1;
            }

            if (finish2 < answer) {
                answer = finish2;
            }
        }
    }

    return answer;
}
