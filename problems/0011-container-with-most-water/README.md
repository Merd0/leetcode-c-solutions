# #0011 - Container With Most Water

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Two Pointers, Greedy
- Hint: The area is limited by the shorter line, so move that side inward.
- Solved date: 2026-05-22
- Source: https://leetcode.com/problems/container-with-most-water/

## Problem Statement

TR: Dikey cizgilerin yukseklikleri verilir. Iki cizgi ve x ekseni arasinda tutulabilecek maksimum su alanini bul.

EN: Given vertical line heights, find the maximum water area that can be formed by two lines and the x-axis.

## Starter Code (C)

```c
int maxArea(int* height, int heightSize) {

}
```

## Parameters

- `height`: Array of line heights.
- `heightSize`: Number of lines.

## Return

TR: Olusabilecek maksimum alan.

EN: Return the maximum possible container area.

## Examples

### Example 1

```text
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation:
The best pair has width 7 and limiting height 7.
```

### Example 2

```text
Input: height = [1,1]
Output: 1
```

## Constraints

- `2 <= height.length <= 10^5`
- `0 <= height[i] <= 10^4`

## Approach

TR: En soldan ve en sagdan basla. Alani hesapla, sonra kisa olan cizgiyi iceri kaydir; cunku alanin sinirini kisa taraf belirler.

EN: Start from both ends. Compute the area, then move the shorter side inward because the shorter side limits the area.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
