# #1249 - Minimum Remove to Make Valid Parentheses

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: String, Stack, In-Place, Two Pointers
- Hint: Mark unmatched closing parentheses from the left, then unmatched opening parentheses from the right.
- Solved date: 2026-07-22
- Source: https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
- Note: Two-pass balance validation followed by in-place buffer compaction

## Problem Statement

TR: Kucuk harfler ve parantezlerden olusan string'den mumkun olan en az sayida
parantezi silerek gecerli bir parantez dizisi dondur.

EN: Remove the minimum number of parentheses so the remaining string is valid.
Lowercase letters remain in their original order.

## Starter Code (C)

```c
char* minRemoveToMakeValid(char* s) {

}
```

## Examples

```text
Input:  s = "lee(t(c)o)de)"
Output: "lee(t(c)o)de"
```

```text
Input:  s = "a)b(c)d"
Output: "ab(c)d"
```

```text
Input:  s = "))(("
Output: ""
```

## Approach

The solution separates the two invalid-parenthesis cases:

```text
left to right -> mark ')' when no earlier '(' can match it
right to left -> mark the remaining unmatched '('
```

During the first pass, `open` is the number of opening parentheses available to
match a future closing parenthesis. A `')'` encountered while `open == 0` can
never become valid, so it is marked immediately.

After that pass, a positive `open` count means some opening parentheses never
received a closing match. Scanning backward marks exactly that many `'('`
characters. The backward direction keeps the earlier openings that can still form
the valid outer structure.

The two passes mark different errors. The first marks extra closing parentheses;
the second marks extra opening parentheses. This is why marking is needed in both
directions.

Finally, the string is compacted in place with read/write indexes. Only the prefix
`s[0..write)` is valid output; marked bytes outside that prefix no longer matter.
The problem input contains only letters and parentheses, so `'*'` is safe as an
internal marker.

Embedded-C connection: this is an in-place validation and compaction pipeline.
Invalid bytes are classified first, then valid data is packed into the front of the
same buffer without a second output allocation.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
