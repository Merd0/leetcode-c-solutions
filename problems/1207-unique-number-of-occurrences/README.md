# #1207 - Unique Number of Occurrences

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Hash Table, Sorting, Counting
- Hint: Count each value first, then check whether two nonzero counts are equal.
- Solved date: 2026-06-20
- Source: https://leetcode.com/problems/unique-number-of-occurrences/
- Note: Daily practice question

## Problem Statement

TR: `arr` dizisindeki her farkli sayinin kac kere gectigini bul. Bu tekrar
sayilarinin hepsi birbirinden farkliysa `true`, ayni tekrar sayisina sahip iki
farkli deger varsa `false` dondur.

EN: Count how many times each distinct value appears in `arr`. Return `true`
when all nonzero occurrence counts are unique; otherwise return `false`.

## Starter Code (C)

```c
bool uniqueOccurrences(int* arr, int arrSize) {

}
```

## Parameters / Return

- `arr`: Integer array.
- `arrSize`: Number of elements in `arr`.
- Returns whether every distinct number has a unique occurrence count.

## Examples

```text
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation:
1 occurs 3 times, 2 occurs 2 times, and 3 occurs 1 time.
The occurrence counts are 3, 2, and 1, all unique.
```

```text
Input: arr = [1,2]
Output: false
Explanation: Both 1 and 2 occur once.
```

```text
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
```

## Constraints

- `1 <= arr.length <= 1000`
- `-1000 <= arr[i] <= 1000`

## Approach

The value range is small, so a fixed frequency array is enough.

Because values may be negative, store `arr[i]` at:

```c
arr[i] + 1000
```

This maps `-1000..1000` into `0..2000`.

After counting, sort the `count` array. Equal nonzero occurrence counts will
become adjacent. Scan neighboring cells:

- Ignore `0`, because unused values do not count as real occurrences.
- If two adjacent nonzero counts are equal, return `false`.
- Otherwise, every occurrence count is unique.

## Complexity

- Time: `O(n + k log k)`, where `k = 2001`
- Extra space: `O(k)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
