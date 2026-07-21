# #2125 - Number of Laser Beams in a Bank

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, String, Matrix, Counting
- Hint: Multiply each non-empty row's device count by the previous non-empty row's count.
- Solved date: 2026-07-21
- Source: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
- Note: Row-state counting with an `O(1)`-space refinement

## Problem Statement

TR: Her `'1'` karakterinin bir guvenlik cihazi oldugu binary satirlar veriliyor.
Aralarinda baska cihazli satir bulunmayan iki satirdaki cihaz ciftlerinin
olusturdugu toplam isin sayisini bul.

EN: Binary strings describe rows of security devices. Count the device pairs
between consecutive non-empty rows, with every pair contributing one beam.

## Starter Code (C)

```c
int numberOfBeams(char** bank, int bankSize) {

}
```

## Example

```text
bank = ["011001",
        "000000",
        "010100",
        "001000"]

Output: 8
```

The non-empty row counts are `3`, `2`, and `1`, so the answer is:

```text
3 * 2 + 2 * 1 = 8
```

Columns do not need to align. Empty rows are skipped, and beams exist only
between consecutive non-empty rows.

## Row-Counts Approach

The first accepted idea stores the number of devices in every row. A second
pass skips zero counts and multiplies each non-empty count by the previous one.
This directly exposes the two stages of the solution and uses `O(bankSize)`
extra space.

## Constant-Space Approach

The row-count array is not required after moving to the next non-empty row.
Count one row, immediately combine it with `previousDevices`, and retain only
that latest non-zero count. This keeps the same logic with `O(1)` extra space.

Embedded-C connection: this is a small streaming state machine. Each row is
reduced to one count, then combined with the last meaningful row while empty
input is ignored.

## Complexity

- Time: `O(rows * cols)`
- Row-count version space: `O(rows)`
- Optimized version space: `O(1)`

## Solution

- [solution_row_counts.c](solution_row_counts.c)
- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
