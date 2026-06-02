# #0443 - String Compression

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Two Pointers, String
- Hint: Use one read index and one write index.
- Solved date: 2026-06-02
- Source: LeetCode #443

## Problem Statement

TR: Karakter array'i veriliyor. Ayni karakterlerden olusan ardisik gruplari
in-place sikistir. Tek karakter varsa sadece karakteri yaz, tekrar sayisi `1`den
buyukse sayiyi karakterler olarak yaz. Yeni uzunlugu dondur.

EN: Given a character array, compress consecutive groups in-place. Write the
character first, and if its count is greater than `1`, write the count as
digits. Return the new length.

## Starter Code (C)

```c
int compress(char* chars, int charsSize) {

}
```

## Parameters / Return

- `chars`: input/output character array.
- `charsSize`: number of characters in the original array.
- Returns the compressed length.

## Examples

```text
Input: chars = ["a","a","b","b","c","c","c"]
Output: 6
Explanation: The first 6 characters become ["a","2","b","2","c","3"].
```

```text
Input: chars = ["a"]
Output: 1
```

```text
Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
Output: 4
Explanation: The first 4 characters become ["a","b","1","2"].
```

## Constraints

- `1 <= chars.length <= 2000`
- `chars[i]` may be lowercase letters, uppercase letters, digits, or symbols.

## Approach

Use two indexes:

- `read`: scans the original groups.
- `write`: writes the compressed output into the same array.

For each group, write the character once. If the group count is greater than
`1`, convert that count into digits and write the digits in normal order.
