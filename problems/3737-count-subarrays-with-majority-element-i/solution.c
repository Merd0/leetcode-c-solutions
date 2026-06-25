int countMajoritySubarrays(int* nums, int numsSize, int target) {
    int answer = 0;

    for (int start = 0; start < numsSize; start++) {
        int targetCount = 0;

        for (int end = start; end < numsSize; end++) {
            if (nums[end] == target) {
                targetCount++;
            }

            int length = end - start + 1;

            if (targetCount * 2 > length) {
                answer++;
            }
        }
    }

    return answer;
}
