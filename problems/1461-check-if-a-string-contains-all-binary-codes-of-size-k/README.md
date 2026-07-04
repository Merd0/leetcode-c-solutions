# #1461 - Check If a String Contains All Binary Codes of Size K

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: String, Bit Manipulation, Rolling Hash, Sliding Window
- Hint: Treat the last `k` bits as a small shift-register value.
- Solved date: 2026-07-04
- Source: https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/
- Note: Embedded-style binary stream / bitmask practice question

## Problem Statement

TR: Sadece `0` ve `1` karakterlerinden olusan `s` stringi ve `k` veriliyor.
Uzunlugu `k` olan butun binary kodlar `s` icinde substring olarak geciyor mu?

EN: Given a binary string `s` and an integer `k`, return whether every binary
code of length `k` appears as a substring of `s`.

## Starter Code (C)

```c
bool hasAllCodes(char* s, int k) {

}
```

## Parameters / Return

- `s`: Binary string.
- `k`: Required code length.
- Returns: `true` if every `k`-bit pattern appears, otherwise `false`.

## Examples

```text
Input:  s = "00110110", k = 2
Output: true

All 2-bit codes appear: 00, 01, 10, 11.
```

```text
Input:  s = "00110", k = 2
Output: true
```

```text
Input:  s = "0110", k = 2
Output: false

The code 00 does not appear.
```

## Constraints

- `1 <= s.length <= 5 * 10^5`
- `s[i]` is either `0` or `1`
- `1 <= k <= 20`

## Approach

There are:

```text
2^k
```

possible binary codes of length `k`.

Instead of building each substring as a new string, keep the last `k` bits as
an integer window:

```c
window = ((window << 1) | bit) & mask;
```

This works like a small shift register:

1. Shift the old window left by one bit.
2. Add the new bit on the right.
3. Use `mask = (1 << k) - 1` to keep only the last `k` bits.

Then `seen[window]` marks whether this `k`-bit pattern appeared before.

As soon as `seen_count == 2^k`, every possible code was found.

## Embedded Connection

This is close to a real binary stream check:

- keep a rolling `k`-bit register,
- mask away old bits,
- mark observed frame/code patterns,
- stop early when all patterns are observed.

## Complexity

- Time: `O(n)`
- Extra space: `O(2^k)`

## Solution

- [solution.c](solution.c)
