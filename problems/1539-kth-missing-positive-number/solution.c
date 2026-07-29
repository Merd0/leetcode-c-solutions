int findKthPositive(int* arr, int arrSize, int k) {
    int index = 0;
    int missingCount = 0;
    int current = 1;

    while (1) {
        if (index < arrSize && arr[index] == current) {
            // current exists in the sorted array, so consume that array value.
            index++;
        } else {
            missingCount++;

            if (missingCount == k) {
                return current;
            }
        }

        current++;
    }
}
