# #0239 - Sliding Window Maximum

## LeetCode Style Info

- Status: Solved
- Difficulty: Hard
- Topics: Array, Queue, Sliding Window, Heap, Monotonic Queue
- Hint: Keep candidate indices in decreasing value order.
- Solved date: 2026-05-26
- Source: LeetCode #239

## Problem Statement

TR: Bir integer dizisi ve `k` veriliyor. Uzunlugu `k` olan her pencerenin maksimum degerini dondur.

EN: Given an integer array and a window size `k`, return the maximum value of each sliding window.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize) {

}
```

## Parameters / Return

- `nums`: input integer array.
- `numsSize`: number of elements in `nums`.
- `k`: window size.
- `returnSize`: output size of the returned array.
- Returns a malloced array containing each window maximum.

## Examples

```text
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
```

```text
Input: nums = [1], k = 1
Output: [1]
```

## Constraints

- `1 <= nums.length <= 10^5`
- `-10^4 <= nums[i] <= 10^4`
- `1 <= k <= nums.length`

## Approach

Use a deque of indices. Remove indices that leave the current window from the
front. Remove smaller values from the back because they cannot become maximum
while the current value is inside the window. The front always holds the max.
