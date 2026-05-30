# #0961 - N-Repeated Element in Size 2N Array

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Hash Table
- Hint: The answer is the first value that appears more than once.
- Solved date: 2026-05-30
- Source: LeetCode #961

## Problem Statement

TR: Uzunlugu `2N` olan bir array veriliyor. Array icinde `N + 1` farkli eleman
vardir ve bu elemanlardan biri tam `N` kere tekrar eder. Tekrar eden elemani
dondur.

EN: Given an array of size `2N`, there are `N + 1` unique elements and exactly
one element appears `N` times. Return that repeated element.

## Starter Code (C)

```c
int repeatedNTimes(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: input array.
- `numsSize`: number of elements in `nums`.
- Returns the element repeated `N` times.

## Examples

```text
Input: nums = [1,2,3,3]
Output: 3
```

```text
Input: nums = [2,1,2,5,3,2]
Output: 2
```

```text
Input: nums = [5,1,5,2,5,3,5,4]
Output: 5
```

## Constraints

- `2 <= n <= 5000`
- `nums.length == 2 * n`
- `0 <= nums[i] <= 10^4`
- `nums` contains `n + 1` unique elements.
- Exactly one element is repeated `n` times.

## Approach

Use a frequency array. As soon as a value is seen for the second time, return it.
Because the repeated value appears many times, the first duplicate found must be
the answer.
