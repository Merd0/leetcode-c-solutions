# #0717 - 1-bit and 2-bit Characters

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Bit Stream, Simulation
- Hint: A leading `0` consumes one bit; a leading `1` consumes two bits.
- Solved date: 2026-06-06
- Source: https://leetcode.com/problems/1-bit-and-2-bit-characters/

## Problem Statement

TR: Bir binary array iki karakter turunu kodlar: `0` tek bitlik karakterdir,
`10` ve `11` ise iki bitlik karakterlerdir. Array her zaman `0` ile biter. Son
bitin mutlaka tek bitlik bir karakter olup olmadigini dondur.

EN: A binary array encodes one-bit characters as `0` and two-bit characters as
`10` or `11`. The array always ends with `0`. Return whether the final bit must
be a one-bit character.

## Starter Code (C)

```c
bool isOneBitCharacter(int* bits, int bitsSize) {

}
```

## Parameters / Return

- `bits`: Encoded binary stream.
- `bitsSize`: Number of bits.
- Returns `true` if decoding starts a one-bit character at the final index.

## Examples

```text
Input: bits = [1,0,0]
Output: true
Explanation: Decode 10 as a two-bit character, then the final 0 stands alone.
```

```text
Input: bits = [1,1,1,0]
Output: false
Explanation: The stream decodes as 11 and 10, so the final bit belongs to a
two-bit character.
```

## Constraints

- `1 <= bits.length <= 1000`
- `bits[i]` is `0` or `1`
- The final element is `0`

## Approach

Parse the stream from left to right, stopping before the final bit:

- If the current bit is `0`, advance by one.
- If the current bit is `1`, advance by two because it starts a two-bit
  character.

After parsing, the last character is one-bit exactly when the cursor lands on
`bitsSize - 1`.

This resembles parsing a compact protocol where the current header bit decides
the field length.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
