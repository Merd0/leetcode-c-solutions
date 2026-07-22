# 10 - Prefix Sums

[Previous](09-variable-sliding-window.md) | [Contents](README.md) | [Turkce](../tr/10-prefix-sums.md) | [Next](11-prefix-state-xor-and-product.md)

## Mental Model

A prefix sum stores the total of the first `i` elements. Many range queries over
the same immutable array then become a difference between two stored summaries.

The clean definition is `prefix[0] = 0` and `prefix[i + 1] = prefix[i] + a[i]`.
The extra zero removes a special case for ranges starting at index zero.

## Invariant And Query

`prefix[t]` is the sum of the half-open range `a[0..t)`.

```c
long long *prefix = calloc((size_t)n + 1, sizeof(*prefix));
for (int i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] + a[i];
}

long long sum = prefix[right + 1] - prefix[left];
```

The first prefix contains both the requested range and everything before it; the
second contains only the part before it.

## Combining Prefix Sums With Hashing

If a subarray sum is `k`, then `prefix[j] - prefix[i] = k`. Therefore a scan can
look for a prior `prefix[j] - k`, including when negative values break a window.

## When Not To Use It

A single fixed-window scan needs less memory. Frequent updates invalidate all later
prefix entries and call for a Fenwick tree or segment tree.

## Cost And C Risks

Build time O(n), query O(1), space O(n). Common errors are mixing inclusive indexes,
allocating only n cells, and overflowing the accumulator.

## Practice In This Repository

[1480 - Running Sum](../../../problems/1480-running-sum-of-1d-array/README.md), [303 - Range Sum Query](../../../problems/0303-range-sum-query-immutable/README.md), [724 - Find Pivot Index](../../../problems/0724-find-pivot-index/README.md), and [560 - Subarray Sum Equals K](../../../problems/0560-subarray-sum-equals-k/README.md).

## Systems Bridge

Energy totals over sample blocks, time-range counters, and offline telemetry queries
use cumulative summaries in the same way.

