# #0941 - Valid Mountain Array

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array
- Hint: First climb while values increase, then descend while values decrease.
- Solved date: 2026-06-25
- Source: https://leetcode.com/problems/valid-mountain-array/
- Note: Daily practice question

## Problem Statement

TR: `arr` dizisi gercek bir dag sekli olusturuyor mu kontrol et. Gecerli dag
icin once kesin artan bir bolum, sonra kesin azalan bir bolum olmali. Tepe ilk
veya son eleman olamaz, esit komsu degerler de gecersizdir.

EN: Check whether `arr` forms a valid mountain shape. A valid mountain must
strictly increase first, then strictly decrease. The peak cannot be the first
or last element, and equal neighboring values are not allowed.

## Starter Code (C)

```c
bool validMountainArray(int* arr, int arrSize) {

}
```

## Parameters / Return

- `arr`: Integer array.
- `arrSize`: Number of elements in `arr`.
- Returns whether the array is a valid mountain.

## Examples

```text
Input: arr = [0,3,2,1]
Output: true
Explanation: It climbs from 0 to 3, then descends to 1.
```

```text
Input: arr = [3,5,5]
Output: false
Explanation: Equal neighboring values are not allowed.
```

```text
Input: arr = [0,1,2,3]
Output: false
Explanation: It only climbs and never descends.
```

## Constraints

- `1 <= arr.length <= 10^4`
- `0 <= arr[i] <= 10^4`

## Approach

Use one index `i`.

First climb:

```c
while (i + 1 < arrSize && arr[i] < arr[i + 1])
```

After climbing, `i` is the possible peak. The peak is invalid if it stayed at
the first element or reached the last element immediately.

Then descend:

```c
while (i + 1 < arrSize && arr[i] > arr[i + 1])
```

The array is a valid mountain only if the descent reaches the final index.

This keeps the logic close to the problem statement: climb, validate peak,
descend.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
