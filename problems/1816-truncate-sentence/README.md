# #1816 - Truncate Sentence

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: String, In-Place, Simulation
- Hint: Count spaces and replace the `k`th space with the string terminator.
- Solved date: 2026-07-30
- Source: https://leetcode.com/problems/truncate-sentence/
- Note: In-place string truncation with C's null terminator

## Problem Statement

TR: Bosluklarla ayrilmis bir cumlenin ilk `k` kelimesini dondur.

EN: Return a sentence containing only the first `k` space-separated words of the
given sentence.

## Starter Code (C)

```c
char* truncateSentence(char* s, int k) {

}
```

## Example

```text
Input:  s = "Hello how are you Contestant", k = 4
Output: "Hello how are you"
```

## Approach

Scan the string from left to right and count the spaces. Each space marks the end
of one word, so the `k`th space comes immediately after the first `k` words.

When that space is found, replace it with C's null terminator:

```c
s[i] = '\0';
```

The existing character array now ends at that position, so no second string or
copy operation is needed. The loop stops immediately because the answer is ready.
If the sentence contains exactly `k` words, there is no `k`th space and the
original string is already the correct answer.

Embedded-C connection: null-terminating a writable buffer at a delimiter is a
common zero-copy technique when parsing command lines, protocol fields, and log
messages under limited memory.

## Complexity

- Time: `O(n)`, where `n` is the number of inspected characters
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
