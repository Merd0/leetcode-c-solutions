# #0682 - Baseball Game

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Stack, Simulation
- Companies: Not tracked in this repo
- Hint: Keep previous valid scores on a stack.
- Solved: 2026-05-23
- LeetCode: https://leetcode.com/problems/baseball-game/

## Problem Statement

TR: Baseball skor islemlerinden olusan bir dizi verilir. Sayilar yeni skor, `+` son iki skorun toplami, `D` son skorun iki kati, `C` son skoru silme anlamina gelir. Final toplam skoru dondur.

EN: Given baseball score operations, numbers add scores, `+` adds the previous two scores, `D` doubles the previous score, and `C` removes the previous score. Return the final sum.

## Starter Code (C)

```c
int calPoints(char** operations, int operationsSize) {

}
```

## Parameters

- `operations`: Operation strings.
- `operationsSize`: Number of operations.

## Return

TR: Tum gecerli skorlarin toplami.

EN: Return the sum of all valid scores.

## Examples

### Example 1

```text
Input: ops = ["5","2","C","D","+"]
Output: 30
Explanation:
Scores become 5, 10, then 15.
```

### Example 2

```text
Input: ops = ["5","-2","4","C","D","9","+","+"]
Output: 27
```

## Constraints

- `1 <= operations.length <= 1000`
- Each operation is an integer string, `+`, `D`, or `C`.
- Operations are always valid.

## Approach

TR: Gecerli skorlar stack'te tutulur. Her operasyona gore stack'e skor eklenir, son skor silinir veya son skorlar kullanilarak yeni skor uretilir.

EN: Store valid scores on a stack. Each operation either pushes a score, removes the last score, or creates a new score from previous scores.

## Solution

- [solution.c](solution.c)
