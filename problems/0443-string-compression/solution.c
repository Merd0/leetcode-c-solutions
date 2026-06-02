int compress(char* chars, int charsSize) {
    int read = 0;
    int write = 0;

    while (read < charsSize) {
        char current = chars[read];
        int count = 0;

        // Ayni karakterler yan yana kac tane?
        while (read < charsSize && chars[read] == current) {
            read++;
            count++;
        }

        // Harfi yaz.
        chars[write] = current;
        write++;

        // Eger 1'den fazlaysa sayisini yaz.
        if (count > 1) {
            char temp[10];
            int len = 0;

            // Sayiyi karakterlere cevir.
            while (count > 0) {
                temp[len] = (count % 10) + '0';
                count /= 10;
                len++;
            }

            // Tersten yaz cunku 12 once 2 sonra 1 cikar.
            for (int i = len - 1; i >= 0; i--) {
                chars[write] = temp[i];
                write++;
            }
        }
    }

    return write;
}
