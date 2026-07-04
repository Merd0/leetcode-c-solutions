# #1784 - Check if Binary String Has at Most One Segment of Ones

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: String, State Machine
- Hint: Once a `0` appears after the first ones block, another `1` would start a second block.
- Solved date: 2026-07-04
- Source: https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
- Note: Lightweight binary stream state-machine practice

## Problem Statement

TR: Binary string `s` icinde en fazla bir tane kesintisiz `1` blogu var mi?
`0` gordukten sonra tekrar `1` gelirse ikinci blok baslamis olur.

EN: Given a binary string `s`, return whether it contains at most one contiguous
segment of `1` characters.

## Starter Code (C)

```c
bool checkOnesSegment(char* s) {

}
```

## Parameters / Return

- `s`: Binary input string.
- Returns: `true` if there is at most one ones segment, otherwise `false`.

## Examples

```text
Input:  s = "1001"
Output: false

There are two separated ones segments.
```

```text
Input:  s = "110"
Output: true

There is only one ones segment.
```

## Constraints

- `1 <= s.length <= 100`
- `s[i]` is either `0` or `1`
- `s[0] == '1'`

## Approach

Use one state flag:

```text
zero_seen = have we already left the first ones block?
```

If a `0` is seen, set `zero_seen = true`. After that, any later `1` means a
second ones segment started, so the answer is `false`.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
