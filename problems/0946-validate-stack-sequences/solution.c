#include <stdbool.h>
#include <stdlib.h>

bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize) {
    int* stack = malloc(pushedSize * sizeof(int));

    if (stack == NULL) {
        return false;
    }

    int top = -1;
    int popIndex = 0;

    for (int i = 0; i < pushedSize; i++) {
        stack[++top] = pushed[i];

        while (top >= 0 && popIndex < poppedSize &&
               stack[top] == popped[popIndex]) {
            top--;
            popIndex++;
        }
    }

    free(stack);

    return popIndex == poppedSize;
}
