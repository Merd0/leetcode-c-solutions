# #1209 - Remove All Adjacent Duplicates in String II

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: String, Stack
- Hint: Use the string as the stack and keep count metadata beside it.
- Solved date: 2026-07-17
- Source: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/
- Note: In-place stack and write-pointer practice

## Problem Statement

TR: String icinde yan yana ayni karakterden `k` tane olusursa bu grup silinir.
Silmeden sonra yeni komsuluklar olusabilir; islem artik silinecek grup kalmayana
kadar devam eder.

EN: Remove every adjacent group of exactly `k` equal characters. Removals can
create new adjacent groups, so continue until no more removals are possible.

## Starter Code (C)

```c
char* removeDuplicates(char* s, int k) {

}
```

## Examples

```text
Input: s = "deeedbbcccbdaa", k = 3
Output: "aa"
```

```text
Input: s = "pbbcggttciiippooaais", k = 2
Output: "ps"
```

## Approach

This solution uses the input string itself as an in-place stack:

```text
read index  -> scans original characters
write index -> first empty position of the cleaned stack
```

For each written position, a `count` array stores the length of the adjacent run
ending at that position:

```text
s:      a b b b
count:  1 1 2 3
```

When `count[write - 1] == k`, the last `k` characters are popped by moving the
write pointer back:

```text
write -= k
```

Old bytes and old count values may still remain in memory, but they are outside
the valid stack range and will be overwritten by later writes.

Embedded-C connection: this is a buffer compaction pattern. Instead of deleting
bytes physically, keep a valid write boundary and let future input overwrite
discarded data.

## Complexity

- Time: `O(n)`
- Space: `O(n)` for count metadata

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
