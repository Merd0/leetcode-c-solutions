#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *dailyTemperatures(int *temperatures,
                       int temperaturesSize,
                       int *returnSize)
{
    /*
     * answer[i] = i. gun kac gun sonra daha sicak gun bulacak?
     * calloc kullandik cunku cevap bulunamayan gunler zaten 0 kalmali.
     */
    int *answer = calloc(temperaturesSize, sizeof(int));

    /*
     * Stack icinde sicaklik degil, index tutacagiz.
     * Cunku cevabi hesaplarken gun farki lazim: today - oldDay
     */
    int *waitingDays = malloc(temperaturesSize * sizeof(int));

    *returnSize = temperaturesSize;

    /* Stack baslangicta bos. */
    int stackTop = -1;

    for (int today = 0; today < temperaturesSize; today++) {
        /*
         * Bugunku sicaklik, bekleyen eski gunlerden daha sicaksa
         * o eski gunlerin cevabi bugun bulunmus olur.
         *
         * Stack'te "henuz daha sicak gununu bulamamis gunler" var.
         */
        while (stackTop >= 0) {
            int oldDay = waitingDays[stackTop];

            if (temperatures[today] > temperatures[oldDay]) {
                answer[oldDay] = today - oldDay;
                stackTop--;
            } else {
                /*
                 * Bugun bu eski gunden sicak degilse duruyoruz.
                 * Stack'in altindaki gunleri de bugun cozemeyiz.
                 */
                break;
            }
        }

        /* Bugunun cevabi ileride bulunabilir diye bugunu stack'e ekliyoruz. */
        waitingDays[++stackTop] = today;
    }

    free(waitingDays);

    return answer;
}
