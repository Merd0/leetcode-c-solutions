# #0066 - Plus One

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Math
- Hint: Start from the last digit and handle carry only while digits are `9`.
- Solved date: 2026-05-20
- Source: https://leetcode.com/problems/plus-one/

## Problem Statement

TR: Bir tamsayi, rakamlardan olusan `digits` dizisiyle verilir. Bu sayiya `1` ekle ve sonucu rakam dizisi olarak dondur.

EN: An integer is represented as an array of digits. Add `1` to that number and return the resulting digit array.

## Starter Code (C)

```c
int* plusOne(int* digits, int digitsSize, int* returnSize) {

}
```

## Parameters

- `digits`: Digits of the number from most significant to least significant.
- `digitsSize`: Number of digits.
- `returnSize`: Output array size written by the function.

## Return

TR: `1` eklenmis sayiyi temsil eden rakam dizisi.

EN: Return the digit array representing the number after adding one.

## Examples

### Example 1

```text
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation:
123 + 1 = 124.
```

### Example 2

```text
Input: digits = [4,3,2,1]
Output: [4,3,2,2]
```

### Example 3

```text
Input: digits = [9]
Output: [1,0]
Explanation:
9 + 1 creates a new digit.
```

## Constraints

- `1 <= digits.length <= 100`
- `0 <= digits[i] <= 9`
- `digits` does not contain leading zeroes.

## Approach

TR: Sondan basa ilerle. Son rakam `9` degilse direkt artirip ayni diziyi dondur. `9` olan rakamlari `0` yap; tum rakamlar `9` ise bir eleman daha buyuk yeni dizi acip basa `1` koy.

EN: Walk from right to left. If a digit is not `9`, increment it and return the same array. Turn `9`s into `0`; if every digit was `9`, allocate a new larger array and set the first digit to `1`.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
