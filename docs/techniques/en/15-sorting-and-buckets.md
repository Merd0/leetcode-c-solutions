# 15 - Sorting And Buckets

[Previous](14-binary-search-on-answer.md) | [Contents](README.md) | [Turkce](../tr/15-sorting-and-buckets.md) | [Next](16-divide-conquer-and-selection.md)

## Mental Model

Sorting is often preprocessing rather than the answer. It converts scattered
relationships into adjacency: equal values meet, extremes move to the ends, and
interval or two-pointer decisions become monotone.

Its cost is O(n log n), and many APIs mutate the input. State exactly what later
work this cost simplifies.

## Comparator Contract

```c
int compare_ints(const void *lhs, const void *rhs) {
    int a = *(const int *)lhs;
    int b = *(const int *)rhs;
    return (a > b) - (a < b);
}
```

`return a - b` can overflow. A comparator must define a consistent negative, zero,
or positive ordering result.

## When Buckets Are Better

For a small value domain, frequency buckets can replace comparison sorting. Sort
Colors has only three values. Cost becomes O(n + domain) with predictable behavior.

## Invariant After Sorting

The post-sort invariant depends on the problem: a processed prefix is grouped, an
active interval extends farthest right, or pointer-external pairs are eliminated.
"It works because the array is sorted" is incomplete without that statement.

## When Not To Use It

Preserve original indexes when order matters. A linear scan is enough for one
maximum, and heap/quickselect may be cheaper for small K.

## Practice In This Repository

[75 - Sort Colors](../../../problems/0075-sort-colors/README.md), [49 - Group Anagrams](../../../problems/0049-group-anagrams/README.md), [1356 - Sort by Number of 1 Bits](../../../problems/1356-sort-integers-by-the-number-of-1-bits/README.md), and [561 - Array Partition](../../../problems/0561-array-partition/README.md).

## Systems Bridge

Sorting measurements by timestamp or logs by fault code is useful offline. In a
real-time path, worst-case time and allocation behavior need separate review.

