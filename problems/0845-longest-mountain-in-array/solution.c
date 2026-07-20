int longestMountain(int* arr, int arrSize) {
    int maxLength = 0;
    int up = 0;
    int down = 0;

    for (int i = 1; i < arrSize; i++) {
        // A new rise after falling starts a new mountain candidate.
        // Equal neighbors break strict mountain shape completely.
        if ((down > 0 && arr[i - 1] < arr[i]) || arr[i - 1] == arr[i]) {
            up = 0;
            down = 0;
        }

        if (arr[i - 1] < arr[i]) {
            up++;
        } else if (arr[i - 1] > arr[i]) {
            down++;
        }

        if (up > 0 && down > 0) {
            int length = up + down + 1;

            if (length > maxLength) {
                maxLength = length;
            }
        }
    }

    return maxLength;
}
