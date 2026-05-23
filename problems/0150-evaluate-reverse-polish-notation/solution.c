#include <stdlib.h>

int isOperator(char *token)
{
    return token[1] == '\0' &&
           (token[0] == '+' || token[0] == '-' ||
            token[0] == '*' || token[0] == '/');
}

int evalRPN(char **tokens, int tokensSize)
{
    int *stack = malloc(tokensSize * sizeof(int));
    int top = -1;

    for (int i = 0; i < tokensSize; i++) {
        if (isOperator(tokens[i])) {
            int b = stack[top--]; /* sagdaki sayi */
            int a = stack[top--]; /* soldaki sayi */

            int result = 0;

            if (tokens[i][0] == '+') {
                result = a + b;
            } else if (tokens[i][0] == '-') {
                result = a - b;
            } else if (tokens[i][0] == '*') {
                result = a * b;
            } else if (tokens[i][0] == '/') {
                result = a / b;
            }

            /* Islem sonucunu tekrar stack'e koy */
            stack[++top] = result;
        } else {
            /* Sayiysa direkt stack'e at */
            stack[++top] = atoi(tokens[i]);
        }
    }

    int answer = stack[top];
    free(stack);

    return answer;
}
