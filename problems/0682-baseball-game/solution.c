#include <stdlib.h>

int calPoints(char **operations, int operationsSize)
{
    int stack[1000];
    int top = -1;

    for (int i = 0; i < operationsSize; i++) {
        if (operations[i][0] == '+') {
            int newScore = stack[top] + stack[top - 1];
            stack[++top] = newScore;
        } else if (operations[i][0] == 'D') {
            int newScore = 2 * stack[top];
            stack[++top] = newScore;
        } else if (operations[i][0] == 'C') {
            top--;
        } else {
            stack[++top] = atoi(operations[i]);
        }
    }

    int sum = 0;
    for (int i = 0; i <= top; i++) {
        sum += stack[i];
    }

    return sum;
}
