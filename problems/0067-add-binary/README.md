# #0067 - Add Binary

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Math, String, Bit Manipulation, Simulation
- Hint: Add from right to left and carry the overflow bit.
- Solved date: 2026-05-30
- Source: LeetCode #67

## Problem Statement

TR: Iki binary string veriliyor. Bu iki sayiyi binary olarak topla ve sonucu
binary string olarak dondur.

EN: Given two binary strings, add them as binary numbers and return the result
as a binary string.

## Starter Code (C)

```c
char* addBinary(char* a, char* b) {

}
```

## Parameters / Return

- `a`: first binary string.
- `b`: second binary string.
- Returns a malloced binary string containing the sum.

## Examples

```text
Input: a = "11", b = "1"
Output: "100"
Explanation: 3 + 1 = 4, and 4 is 100 in binary.
```

```text
Input: a = "1010", b = "1011"
Output: "10101"
```

## Constraints

- `1 <= a.length, b.length <= 10^4`
- `a` and `b` contain only `0` or `1`.
- Each string has no leading zero unless the string is exactly `"0"`.

## Approach

Start from the last character of both strings. Convert each character to a bit,
add the two bits plus `carry`, then write:

```c
sum & 1
```

as the current output bit and update carry with:

```c
sum >> 1
```

The result is filled from right to left. If the first allocated character is not
used, shift the string left before returning so the returned pointer is still
the original `malloc` pointer.
