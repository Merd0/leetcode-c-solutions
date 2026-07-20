# #1720 - Decode XORed Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Bit Manipulation
- Hint: XOR the known current value with its encoded pair to recover the next value.
- Solved date: 2026-06-12
- Source: https://leetcode.com/problems/decode-xored-array/
- Note: Daily practice question

## Problem Statement

TR: Orijinal `arr` dizisinden `encoded[i] = arr[i] XOR arr[i + 1]` kuraliyla
bir encoded dizi uretilmistir. `encoded` ve orijinal dizinin ilk elemani
verildiginde tum `arr` dizisini geri olustur.

EN: An encoded array was created with
`encoded[i] = arr[i] XOR arr[i + 1]`. Given `encoded` and the first value of
the original array, reconstruct and return the complete array.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize) {

}
```

## Parameters / Return

- `encoded`: XOR result of each adjacent pair in the original array.
- `encodedSize`: Number of encoded values.
- `first`: First value of the original array.
- `returnSize`: Must be set to `encodedSize + 1`.
- Returns the newly allocated decoded array.

## Examples

```text
Input: encoded = [1,2,3], first = 1
Output: [1,0,2,1]
Explanation:
1 XOR 1 = 0
0 XOR 2 = 2
2 XOR 3 = 1
```

```text
Input: encoded = [6,2,7,3], first = 4
Output: [4,2,0,7,4]
```

## Constraints

- `1 <= encoded.length <= 10^4`
- `0 <= encoded[i] <= 10^5`
- `0 <= first <= 10^5`

## Approach

XOR reverses itself:

```text
a XOR b = encoded
a XOR encoded = b
```

After storing `first` in `arr[0]`, recover every next value with:

```c
arr[i + 1] = arr[i] ^ encoded[i];
```

Only the previous decoded value is needed to produce the next one.

## Complexity

- Time: `O(n)`
- Extra space: `O(n)` for the required returned array

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
