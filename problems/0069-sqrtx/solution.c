int mySqrt(int x) {
    int left = 0;
    int right = x;
    int answer = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long square = (long long)mid * mid;

        if (square == x) {
            return mid;
        } else if (square < x) {
            answer = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return answer;
}
