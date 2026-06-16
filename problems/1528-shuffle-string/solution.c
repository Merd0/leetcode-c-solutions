#include <stdlib.h>

char* restoreString(char* s, int* indices, int indicesSize) {
    
    char* shuffle = malloc((indicesSize + 1) * sizeof(char));

    for(int i = 0 ; s[i] != '\0'; i++){
        shuffle[indices[i]] = s[i];
    }

    shuffle[indicesSize] = '\0';

    return shuffle;
}
