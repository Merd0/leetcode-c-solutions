#include <stdlib.h>

int minTimeToType(char* word) {
    char current = 'a';
    int totalTime = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        int distance = abs(word[i] - current);
        int circularDistance = 26 - distance;

        if (circularDistance < distance) {
            distance = circularDistance;
        }

        // Add the shortest movement and one second to type the character.
        totalTime += distance + 1;
        current = word[i];
    }

    return totalTime;
}
