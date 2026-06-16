#include <stdlib.h>

char* mergeAlternately(char* word1, char* word2) {
    
    int word1Size = 0;
    int word2Size = 0;

    for (int i = 0; word1[i] != '\0'; i++) {
        word1Size++;
    }

    for (int i = 0; word2[i] != '\0'; i++) {
        word2Size++;
    }

    char* mergeStrings = malloc((word1Size + word2Size + 1) * sizeof(char));

    int i = 0; // word1 index
    int j = 0; // word2 index
    int k = 0; // result index

    while (i < word1Size && j < word2Size) {
        mergeStrings[k++] = word1[i++];
        mergeStrings[k++] = word2[j++];
    }

    while (i < word1Size) {
        mergeStrings[k++] = word1[i++];
    }

    while (j < word2Size) {
        mergeStrings[k++] = word2[j++];
    }

    mergeStrings[k] = '\0';

    return mergeStrings;
}
