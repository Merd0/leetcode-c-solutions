char* reversePrefix(char* word, char ch) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (ch == word[i]) {
            int finish = i;

            for (int j = 0; j < finish; j++) {
                char temp = word[finish];
                word[finish] = word[j];
                word[j] = temp;
                finish--;
            }

            break;
        }
    }

    return word;
}
