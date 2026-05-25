char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int left = 0;
    int right = lettersSize - 1;
    char answer = letters[0];

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (letters[mid] > target) {
            answer = letters[mid];
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return answer;
}
