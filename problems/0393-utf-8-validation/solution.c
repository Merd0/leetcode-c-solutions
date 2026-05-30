#include <stdbool.h>

bool validUtf8(int* data, int dataSize) {
    int need = 0; // kac tane 10xxxxxx devam byte'i bekliyoruz

    for (int i = 0; i < dataSize; i++) {
        int byte = data[i];

        if (need == 0) {
            // 0xxxxxxx -> tek byte karakter
            if ((byte >> 7) == 0) {
                need = 0;
            }
            // 110xxxxx -> 1 devam byte lazim
            else if ((byte >> 5) == 0x6) {
                need = 1;
            }
            // 1110xxxx -> 2 devam byte lazim
            else if ((byte >> 4) == 0xE) {
                need = 2;
            }
            // 11110xxx -> 3 devam byte lazim
            else if ((byte >> 3) == 0x1E) {
                need = 3;
            }
            // 10xxxxxx veya 11111xxx baslangic olamaz
            else {
                return false;
            }
        } else {
            // Devam byte mutlaka 10xxxxxx olmali.
            if ((byte >> 6) != 0x2) {
                return false;
            }

            need--;
        }
    }

    return need == 0;
}
