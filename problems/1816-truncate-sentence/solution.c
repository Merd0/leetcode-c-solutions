char* truncateSentence(char* s, int k) {
    int spaces = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            spaces++;

            if (spaces == k) {
                // End the string after its first k words.
                s[i] = '\0';
                break;
            }
        }
    }

    return s;
}
