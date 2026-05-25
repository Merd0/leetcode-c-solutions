#include <stdlib.h>
#include <string.h>

int compareChar(const void* a, const void* b) {
    char x = *(char*)a;
    char y = *(char*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

char*** groupAnagrams(char** strs, int strsSize, int* returnSize, int** returnColumnSizes) {

    char*** result = malloc(strsSize * sizeof(char**));
    *returnColumnSizes = malloc(strsSize * sizeof(int));

    char** keys = malloc(strsSize * sizeof(char*));

    int groupCount = 0;

    for (int i = 0; i < strsSize; i++) {

        int len = strlen(strs[i]);

        // Make a sorted copy of strs[i] and use it as the group key.
        char* key = malloc((len + 1) * sizeof(char));
        strcpy(key, strs[i]);

        qsort(key, len, sizeof(char), compareChar);

        int foundIndex = -1;

        for (int j = 0; j < groupCount; j++) {
            if (strcmp(keys[j], key) == 0) {
                foundIndex = j;
                break;
            }
        }

        if (foundIndex != -1) {
            int col = (*returnColumnSizes)[foundIndex];
            result[foundIndex][col] = strs[i];
            (*returnColumnSizes)[foundIndex]++;
            free(key);
        } else {
            keys[groupCount] = key;

            result[groupCount] = malloc(strsSize * sizeof(char*));
            result[groupCount][0] = strs[i];

            (*returnColumnSizes)[groupCount] = 1;
            groupCount++;
        }
    }

    *returnSize = groupCount;

    for (int i = 0; i < groupCount; i++) {
        free(keys[i]);
    }
    free(keys);

    return result;
}
