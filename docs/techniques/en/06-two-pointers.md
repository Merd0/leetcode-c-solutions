# 06 - Two Pointers

[Previous](05-hash-tables.md) | [Contents](README.md) | [Turkce](../tr/06-two-pointers.md) | [Next](07-in-place-read-write.md)

## Mental Model

Two pointers are not two indexes moved arbitrarily. Every movement must provably
eliminate a region that cannot contain the answer. Pointers may approach from both
ends, move in one direction at different speeds, or merge separate sequences.

Sorted order, monotonic behavior, or a rule that identifies the weaker boundary is
usually the key assumption.

## Invariant

When searching a sorted array for a target sum, every pair outside `[left, right]`
has already been ruled out.

```c
while (left < right) {
    long long sum = (long long)a[left] + a[right];
    if (sum == target) return true;
    if (sum < target) left++;
    else right--;
}
```

If the sum is too small, pairing `right` with an even smaller left value cannot
increase it. This proof justifies moving `left`.

## Recognition Signals

Sorted data, pair search, palindrome checks, two-ended choices, in-place filtering,
or merging two sorted streams.

## When It Fails

Without order or monotonicity, there may be no proof for which pointer to move.
Negative values also break monotonic assumptions in some window problems.

## Cost And C Risks

If each pointer moves at most n times, time is O(n) and space O(1). Watch overflow,
accidental reuse of one element, and accesses after a boundary moves.

## Practice In This Repository

[167 - Two Sum II](../../../problems/0167-two-sum-ii-input-array-is-sorted/README.md), [11 - Container With Most Water](../../../problems/0011-container-with-most-water/README.md), [15 - 3Sum](../../../problems/0015-3sum/README.md), and [977 - Squares of a Sorted Array](../../../problems/0977-squares-of-a-sorted-array/README.md).

## Systems Bridge

Merging timestamped streams and aligning observations from two sensors use the same
monotone pointer movement.

