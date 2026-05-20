# #0485 - Max Consecutive Ones

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/max-consecutive-ones/
- Topics: Array, Counting

## Problem

TR: Sadece `0` ve `1` iceren dizide arka arkaya gelen en uzun `1` serisinin uzunlugunu bul.

EN: Given a binary array, find the longest consecutive run of `1` values.

## Starter Code (C)

```c
int findMaxConsecutiveOnes(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Binary input array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: En uzun ardisik `1` serisinin uzunlugu.

EN: Length of the longest consecutive `1` run.

## Example

```text
Input: nums = [1,1,0,1,1,1]
Output: 3
```

## Approach

TR: `1` geldikce mevcut seriyi arttir. `0` gelince seri sifirlanir.

EN: Increase the current streak on `1`; reset it on `0`.

## Solution

- [solution.c](solution.c)
