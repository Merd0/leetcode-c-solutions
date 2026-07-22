# 04 - Counting And Frequency Tables

[Previous](03-simulation-and-state-machines.md) | [Contents](README.md) | [Turkce](../tr/04-counting-and-frequency-tables.md) | [Next](05-hash-tables.md)

## Mental Model

When the value domain is small and known, map every value directly to an array index.
Instead of rescanning a large input, summarize its distribution in a compact `freq`
table.

For `'A'..'Z'`, use `c - 'A'`; for character digits `'1'..'9'`, use `c - '1'`.
Raw character codes are not valid indexes for an array of nine elements.

## Invariant

After index `i` is processed, `freq[v]` is the exact count of `v` in the first
`i + 1` input values.

```c
int freq[26] = {0};
for (int i = 0; s[i] != '\0'; i++) {
    int index = s[i] - 'a';
    freq[index]++;
}
```

The compact table then answers distribution questions independently of input order.

## Array Or Hash Table?

Use an array for a small, dense, bounded domain. Use a hash table for large, sparse,
or string keys. Direct access is not useful if it requires a billion counters.

## When Counts Are Insufficient

Frequency loses order. `aab` and `aba` have the same counts but different runs.
Use a window, stack, or parser state when adjacency matters.

## Cost And C Risks

Building costs O(n), scanning the domain costs O(domain). Validate a character before
using its mapped index, and select a counter type that cannot overflow.

## Practice In This Repository

[242 - Valid Anagram](../../../problems/0242-valid-anagram/README.md), [383 - Ransom Note](../../../problems/0383-ransom-note/README.md), and [1365 - How Many Numbers Are Smaller](../../../problems/1365-how-many-numbers-are-smaller-than-the-current-number/README.md).

## Systems Bridge

Histograms, fault-code counters, pixel intensity distributions, and message-type
statistics use this exact bounded-domain model.

