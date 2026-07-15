int shipWithinDays(int* weights, int weightsSize, int days) {
    int left = weights[0];
    int right = weights[0];

    // left starts as the heaviest single package.
    // right starts as the total weight, which is always enough in one day.
    for (int i = 1; i < weightsSize; i++) {
        if (weights[i] > left) {
            left = weights[i];
        }

        right += weights[i];
    }

    while (left < right) {
        int mid = left + (right - left) / 2;
        int neededDays = 1;
        int load = 0;

        // Feasibility check: how many days does capacity mid need?
        for (int i = 0; i < weightsSize; i++) {
            if (load + weights[i] <= mid) {
                load += weights[i];
            } else {
                neededDays++;
                load = weights[i];
            }
        }

        if (neededDays <= days) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}
