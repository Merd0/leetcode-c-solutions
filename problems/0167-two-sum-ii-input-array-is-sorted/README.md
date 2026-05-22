# #0167 - Two Sum II - Input Array Is Sorted

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Two Pointers, Binary Search
- Companies: Not tracked in this repo
- Hint: The input is sorted, so move the left or right pointer based on the current sum.
- Solved: 2026-05-22
- LeetCode: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

## Problem Statement

TR: Artan sirada sirali `numbers` dizisi ve `target` verilir. Toplami `target` olan iki sayinin 1-based indekslerini dondur.

EN: Given a sorted `numbers` array and a `target`, return the 1-based indices of two numbers whose sum equals `target`.

## Starter Code (C)

```c
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {

}
```

## Parameters

- `numbers`: Sorted input array.
- `numbersSize`: Number of elements.
- `target`: Required sum.
- `returnSize`: Output size written by the function.

## Return

TR: Toplami hedef olan iki elemanin 1-based indekslerini tutan dizi.

EN: Return an array containing the two 1-based indices.

## Examples

### Example 1

```text
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation:
2 + 7 = 9.
```

### Example 2

```text
Input: numbers = [2,3,4], target = 6
Output: [1,3]
```

### Example 3

```text
Input: numbers = [-1,0], target = -1
Output: [1,2]
```

## Constraints

- `2 <= numbers.length <= 3 * 10^4`
- `-1000 <= numbers[i] <= 1000`
- `numbers` is sorted in non-decreasing order.
- Exactly one solution exists.

## Approach

TR: Sol ve sag pointer ile basla. Toplam hedefin altindaysa solu ilerlet, ustundeyse sagi geri cek. Eslesme bulununca 1-based indeksleri dondur.

EN: Start with left and right pointers. If the sum is too small, move left forward; if too large, move right backward. Return 1-based indices when the sum matches.

## Solution

- [solution.c](solution.c)
