#include <stdlib.h>
#include <string.h>

int maxProduct(char** words, int wordsSize) {
    int* masks = malloc(wordsSize * sizeof(int));
    int* lens = malloc(wordsSize * sizeof(int));

    for (int i = 0; i < wordsSize; i++) {
        masks[i] = 0;
        lens[i] = strlen(words[i]);

        for (int j = 0; words[i][j] != '\0'; j++) {
            int bit = words[i][j] - 'a';
            masks[i] = masks[i] | (1 << bit);
        }
    }

    int max = 0;

    for (int i = 0; i < wordsSize; i++) {
        for (int j = i + 1; j < wordsSize; j++) {
            // Ortak harf yoksa.
            if ((masks[i] & masks[j]) == 0) {
                int product = lens[i] * lens[j];

                if (product > max) {
                    max = product;
                }
            }
        }
    }

    free(masks);
    free(lens);

    return max;
}
