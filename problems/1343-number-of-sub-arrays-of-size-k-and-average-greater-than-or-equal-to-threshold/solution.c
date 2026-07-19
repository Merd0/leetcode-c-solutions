int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int sum = 0;
    int answer = 0;
    int target = threshold * k;

    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    if (sum >= target) {
        answer++;
    }

    for (int i = k; i < arrSize; i++) {
        // Slide the fixed-size window by adding the new sample
        // and removing the sample that just left the window.
        sum += arr[i];
        sum -= arr[i - k];

        if (sum >= target) {
            answer++;
        }
    }

    return answer;
}
