# #0709 - To Lower Case

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: String, ASCII
- Hint: Uppercase English letters are consecutive in ASCII.
- Solved date: 2026-05-21
- Source: https://leetcode.com/problems/to-lower-case/

## Problem Statement

TR: Bir string verilir. String icindeki buyuk Ingilizce harfleri kucuk harfe cevirip ayni stringi dondur.

EN: Given a string, convert every uppercase English letter to lowercase and return the string.

## Starter Code (C)

```c
char* toLowerCase(char* s) {

}
```

## Parameters

- `s`: Input string.

## Return

TR: Buyuk harfleri kucuge cevrilmis string.

EN: Return the same string after uppercase letters are converted to lowercase.

## Examples

### Example 1

```text
Input: s = "Hello"
Output: "hello"
```

### Example 2

```text
Input: s = "here"
Output: "here"
```

### Example 3

```text
Input: s = "LOVELY"
Output: "lovely"
```

## Constraints

- `1 <= s.length <= 100`
- `s` contains printable ASCII characters.

## Approach

TR: Stringi karakter karakter gez. Karakter `'A'` ile `'Z'` arasindaysa ASCII farki olan `32` ekleyerek kucuk harfe cevir.

EN: Scan the string character by character. If a character is between `'A'` and `'Z'`, add the ASCII distance `32` to convert it to lowercase.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
