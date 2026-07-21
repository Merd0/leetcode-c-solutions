#include <stdbool.h>
#include <stdlib.h>

bool carPooling(int** trips, int tripsSize,
                int* tripsColSize, int capacity) {
    (void)tripsColSize;

    int maxPosition = 0;

    for (int i = 0; i < tripsSize; i++) {
        if (trips[i][2] > maxPosition) {
            maxPosition = trips[i][2];
        }
    }

    int* changes = calloc(maxPosition + 1, sizeof(int));

    if (changes == NULL) {
        return false;
    }

    for (int i = 0; i < tripsSize; i++) {
        int passengers = trips[i][0];
        int from = trips[i][1];
        int to = trips[i][2];

        // Record only the positions where the passenger load changes.
        changes[from] += passengers;
        changes[to] -= passengers;
    }

    int currentPassengers = 0;

    for (int position = 0; position <= maxPosition; position++) {
        currentPassengers += changes[position];

        if (currentPassengers > capacity) {
            free(changes);
            return false;
        }
    }

    free(changes);
    return true;
}
