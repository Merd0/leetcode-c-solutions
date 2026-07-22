# 11 - Prefix State, XOR, And Product

[Previous](10-prefix-sums.md) | [Contents](README.md) | [Turkce](../tr/11-prefix-state-xor-and-product.md) | [Next](12-difference-arrays-and-event-sweeps.md)

## Mental Model

Prefix reasoning is not limited to addition. It applies when an operation has a
composable cumulative summary and range information can be recovered from two
prefix states, including XOR, parity masks, and selected product problems.

Define the state in one sentence before writing code. "`prefix[i]` is the XOR of
the first i values" is precise; "the value so far" is not.

## Prefix XOR

Because `x ^ x = 0`, equal prefix portions cancel.

```c
prefix[0] = 0;
for (int i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] ^ a[i];
}
int range_xor = prefix[right + 1] ^ prefix[left];
```

## Prefix And Suffix State

Product of Array Except Self writes the product to the left of each index, then
multiplies it by a running suffix product from the right. This avoids division and
an additional full suffix array.

Products do not always have a safe inverse. Zero makes division undefined, and
products overflow quickly. Never copy the sum formula without checking the algebra.

## State Compression

Five parity bits can summarize whether each vowel count is odd or even. If the same
mask appears at two positions, the range between them changed none of those parities.

## Cost And C Risks

Most prefix-state solutions are O(n). Use an array for a bounded state space and a
hash table for a wide one. Check signed bit operations and multiplication overflow.

## Practice In This Repository

[1310 - XOR Queries](../../../problems/1310-xor-queries-of-a-subarray/README.md), [238 - Product Except Self](../../../problems/0238-product-of-array-except-self/README.md), [1371 - Vowels in Even Counts](../../../problems/1371-find-the-longest-substring-containing-vowels-in-even-counts/README.md), and [1352 - Product of the Last K Numbers](../../../problems/1352-product-of-the-last-k-numbers/README.md).

## Systems Bridge

Frame checksum summaries, parity state, and changes between two measurement points
use the same algebraic cancellation idea.

