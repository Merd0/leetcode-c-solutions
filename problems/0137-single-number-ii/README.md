# #0137 - Single Number II

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Bit Manipulation
- Hint: After sorting, groups of three should line up unless the single value appears.
- Solved date: 2026-06-02
- Source: LeetCode #137

## Problem Statement

TR: Bir integer array veriliyor. Bir eleman sadece bir kere, diger tum elemanlar
uc kere geciyor. Sadece bir kere gecen elemani dondur.

EN: Given an integer array where every element appears three times except one,
return the element that appears exactly once.

## Starter Code (C)

```c
int singleNumber(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: input array, modified by sorting.
- `numsSize`: number of elements.
- Returns the value that appears once.

## Examples

```text
Input: nums = [2,2,3,2]
Output: 3
```

```text
Input: nums = [0,1,0,1,0,1,99]
Output: 99
```

## Constraints

- `1 <= nums.length <= 3 * 10^4`
- `-2^31 <= nums[i] <= 2^31 - 1`
- Each element appears three times except one element that appears once.

## Approach

This archived solution uses sorting. Once the array is sorted, values that
appear three times should occupy groups of three. Scan in steps of three. If the
first two values of a group are different, the first value is the single number.

The classic bitwise solution counts each bit modulo `3`, but this version keeps
the accepted sorting approach for revision.
