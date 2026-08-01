#include <stdlib.h>

int* corpFlightBookings(int** bookings, int bookingsSize,
                        int* bookingsColSize, int n, int* returnSize) {
    (void)bookingsColSize;

    int* totalFlights = calloc(n, sizeof(int));
    *returnSize = n;

    for (int i = 0; i < bookingsSize; i++) {
        int first = bookings[i][0] - 1;
        int last = bookings[i][1];
        int seats = bookings[i][2];

        // Mark where this booking range starts contributing.
        totalFlights[first] += seats;

        if (last < n) {
            // Stop its contribution immediately after the inclusive range.
            totalFlights[last] -= seats;
        }
    }

    // Convert range changes into the total reservations for each flight.
    for (int i = 1; i < n; i++) {
        totalFlights[i] += totalFlights[i - 1];
    }

    return totalFlights;
}
