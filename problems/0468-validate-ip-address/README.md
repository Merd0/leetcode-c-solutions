# #0468 - Validate IP Address

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: String
- Hint: Validate IPv4 and IPv6 with separate rules.
- Solved date: 2026-06-03
- Source: LeetCode #468

## Problem Statement

TR: Bir IP string veriliyor. Gecerli IPv4 ise `"IPv4"`, gecerli IPv6 ise
`"IPv6"`, hicbiri degilse `"Neither"` dondur.

EN: Given a query IP string, return `"IPv4"` if it is a valid IPv4 address,
`"IPv6"` if it is a valid IPv6 address, or `"Neither"` otherwise.

## Starter Code (C)

```c
char* validIPAddress(char* queryIP) {

}
```

## Parameters / Return

- `queryIP`: input IP address string.
- Returns one of `"IPv4"`, `"IPv6"`, or `"Neither"`.

## Examples

```text
Input: queryIP = "172.16.254.1"
Output: "IPv4"
```

```text
Input: queryIP = "2001:0db8:85a3:0:0:8A2E:0370:7334"
Output: "IPv6"
```

```text
Input: queryIP = "256.256.256.256"
Output: "Neither"
```

## Constraints

- `queryIP` contains only English letters, digits, `.`, and `:`.

## Approach

Split the logic by separator:

- IPv4 uses four decimal parts separated by dots. Each part must be `0..255`,
  non-empty, and must not have leading zeroes unless the part is exactly `0`.
- IPv6 uses eight hexadecimal parts separated by colons. Each part must have
  `1..4` valid hex characters.

The implementation scans manually instead of allocating token arrays.
