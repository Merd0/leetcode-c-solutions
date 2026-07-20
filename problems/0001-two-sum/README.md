# #0001 - Two Sum

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Hash Table, Brute Force
- Hint: For each number, look for another number that completes the target sum.
- Solved date: 2026-05-18
- Source: https://leetcode.com/problems/two-sum/

## Problem Statement

TR: Bir tamsayi dizisi ve bir `target` verilir. Dizideki iki farkli elemanin toplami `target` ediyorsa bu iki elemanin indekslerini dondur.

EN: Given an integer array and a `target`, return the indices of two different elements whose sum equals `target`.

## Starter Code (C)

```c
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.
- `target`: Required sum.
- `returnSize`: Output parameter; set to `2` when two indices are returned.

## Return

TR: Heap uzerinde ayrilmis iki elemanli indeks dizisi.

EN: Return a heap-allocated array containing the two indices.

## Examples

### Example 1

```text
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation:
nums[0] + nums[1] = 2 + 7 = 9.
```

### Example 2

```text
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

### Example 3

```text
Input: nums = [3,3], target = 6
Output: [0,1]
```

## Constraints

- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Exactly one valid answer exists.
- The same element cannot be used twice.

## Approach

TR: Bu cozum brute force ilerler. Her `i` icin sadece ondan sonraki `j` elemanlarini kontrol eder. Boylece ayni eleman iki kez kullanilmaz ve ayni cift ters sirayla tekrar denenmez.

EN: This solution uses brute force. For every `i`, it checks only later `j` elements, so the same element is not reused and the same pair is not checked twice in reverse order.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
