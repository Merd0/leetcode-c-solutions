# #0771 - Jewels and Stones

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: String, Hash Table
- Hint: For every stone, check whether it appears in the jewel list.
- Solved date: 2026-05-21
- Source: https://leetcode.com/problems/jewels-and-stones/

## Problem Statement

TR: `jewels` hangi karakterlerin mucevher oldugunu, `stones` ise elindeki taslari temsil eder. Taslarin kac tanesinin mucevher oldugunu bul.

EN: `jewels` lists the characters that count as jewels, and `stones` lists the stones you have. Count how many stones are jewels.

## Starter Code (C)

```c
int numJewelsInStones(char* jewels, char* stones) {

}
```

## Parameters

- `jewels`: Characters that are considered jewels.
- `stones`: Characters representing owned stones.

## Return

TR: `stones` icinde `jewels` karakterlerinden kac tane oldugu.

EN: Return how many characters in `stones` also appear in `jewels`.

## Examples

### Example 1

```text
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
Explanation:
The stones 'a', 'A', and 'A' are jewels.
```

### Example 2

```text
Input: jewels = "z", stones = "ZZ"
Output: 0
```

## Constraints

- `1 <= jewels.length, stones.length <= 50`
- `jewels` and `stones` contain English letters.
- All characters in `jewels` are unique.

## Approach

TR: Her tas karakteri icin mucevher listesini gez. Eslesme bulunursa sayaci artir ve ic donguden cik.

EN: For each stone character, scan the jewel list. When a match is found, increase the counter and stop checking that stone.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
