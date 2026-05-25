# #0202 - Happy Number

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Hash Table, Math, Two Pointers
- Hint: If the process repeats a previous sum, it will never reach 1.
- Solved date: 2026-05-25
- Source: LeetCode #202

## Problem Statement

TR: Bir sayinin basamak kareleri toplamini tekrar tekrar al. Sonunda 1'e ulasiyorsa happy number'dir.

EN: Repeatedly replace a number by the sum of the squares of its digits. Return whether the process reaches 1.

## Starter Code (C)

```c
bool isHappy(int n) {

}
```

## Parameters / Return

- `n`: positive integer to check.
- Returns `true` if `n` is happy, otherwise returns `false`.

## Examples

```text
Input: n = 19
Output: true
Explanation: 19 -> 82 -> 68 -> 100 -> 1.
```

```text
Input: n = 2
Output: false
Explanation: The process enters a cycle that does not include 1.
```

## Constraints

- `1 <= n <= 2^31 - 1`

## Approach

Generate the next value by summing digit squares. Store seen sums in a fixed
array. If a sum appears again, the sequence is cycling and cannot become 1.
