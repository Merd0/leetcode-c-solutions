char findTheDifference(char* s, char* t) {
    char add = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        add = add ^ s[i];
    }

    for (int i = 0; t[i] != '\0'; i++) {
        add = add ^ t[i];
    }

    return add;
}
