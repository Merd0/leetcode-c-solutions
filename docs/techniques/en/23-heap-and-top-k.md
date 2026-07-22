# 23 - Heap And Top-K

[Previous](22-monotonic-queue.md) | [Contents](README.md) | [Turkce](../tr/23-heap-and-top-k.md) | [Next](24-streams-and-iterators.md)

## Mental Model

A heap does not fully sort its elements. It maintains a partial order that exposes
the smallest or largest root. For the strongest K candidates, a K-sized min-heap
keeps the weakest selected candidate at the root.

Only K elements remain organized instead of all n values.

## Invariant

After processing the first i inputs, the heap contains at most the best K candidates
from that prefix.

```c
for (int i = 0; i < n; i++) {
    if (heap_size < k) push(a[i]);
    else if (a[i] > peek_min()) replace_min(a[i]);
}
```

If a full heap's root is already at least as good as the new value, the new value
cannot enter the best K.

## Heap Layout

In a zero-indexed array, parent is `(i - 1) / 2`; children are `2*i + 1` and
`2*i + 2`. A heap guarantees parent-child order, not globally sorted iteration.

## Alternatives

Sorting costs O(n log n), a heap O(n log K), and quickselect expected O(n). Heaps
are strong for online repeated inputs; sorting is often simpler for small batches.

## C Risks

Comparator direction determines min versus max heap. Guard capacity, empty-root
access, integer conversions, and lifetime of pointers stored in the heap.

## Practice In This Repository

[347 - Top K Frequent Elements](../../../problems/0347-top-k-frequent-elements/README.md) compares multiple Top-K methods. [414 - Third Maximum Number](../../../problems/0414-third-maximum-number/README.md) shows when fixed small K needs no heap.

## Systems Bridge

Highest-priority events, strongest error signals, or a bounded telemetry shortlist
can be maintained online in a fixed-capacity heap.

