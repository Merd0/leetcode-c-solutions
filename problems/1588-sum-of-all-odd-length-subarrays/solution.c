int sumOddLengthSubarrays(int* arr, int arrSize) {
    int total = 0;

    for (int start = 0; start < arrSize; start++) {
        int sum = 0;

        for (int end = start; end < arrSize; end++) {
            sum += arr[end];

            int length = end - start + 1;

            if (length % 2 == 1) {
                total += sum;
            }
        }
    }

    return total;
}
