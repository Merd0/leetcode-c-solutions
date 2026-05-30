# #0393 - UTF-8 Validation

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Bit Manipulation
- Hint: Count how many continuation bytes a leading byte requires.
- Solved date: 2026-05-30
- Source: LeetCode #393

## Problem Statement

TR: Integer array icindeki her eleman bir byte'i temsil eder. Bu byte dizisinin
gecerli bir UTF-8 encoding olup olmadigini kontrol et.

EN: Given an integer array where each value represents one byte, determine
whether the byte sequence is a valid UTF-8 encoding.

## Starter Code (C)

```c
bool validUtf8(int* data, int dataSize) {

}
```

## Parameters / Return

- `data`: byte values, each in the range `0..255`.
- `dataSize`: number of bytes.
- Returns `true` if the sequence is valid UTF-8, otherwise `false`.

## Examples

```text
Input: data = [197,130,1]
Output: true
Explanation: 197 starts a 2-byte character, 130 is a valid continuation byte,
and 1 is a valid 1-byte character.
```

```text
Input: data = [235,140,4]
Output: false
Explanation: 235 starts a 3-byte character, but 4 is not a continuation byte.
```

## Constraints

- `1 <= data.length <= 2 * 10^4`
- `0 <= data[i] <= 255`

## Approach

Keep `need`, the number of continuation bytes still expected.

When `need == 0`, inspect the leading byte pattern:

- `0xxxxxxx`: single-byte character.
- `110xxxxx`: needs 1 continuation byte.
- `1110xxxx`: needs 2 continuation bytes.
- `11110xxx`: needs 3 continuation bytes.

When `need > 0`, every following byte must match `10xxxxxx`. At the end, the
sequence is valid only if `need == 0`.
