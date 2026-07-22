# 12 - Difference Arrays And Event Sweeps

[Previous](11-prefix-state-xor-and-product.md) | [Contents](README.md) | [Turkce](../tr/12-difference-arrays-and-event-sweeps.md) | [Next](13-binary-search-on-sorted-data.md)

## Mental Model

When a value affects every position in `[from, to)`, record only where the effect
starts and stops: `changes[from] += x`, `changes[to] -= x`. A later prefix sweep
reconstructs the active value.

The method stores events rather than every affected position. "Three passengers
board here" and "three leave here" are sufficient to describe all stops between.

## Invariant

During the sweep, `current` is the sum of every effect that has started and not yet
ended at the current position.

```c
for (int i = 0; i < event_count; i++) {
    changes[start[i]] += value[i];
    changes[end[i]] -= value[i];
}

int current = 0;
for (int p = 0; p <= max_position; p++) {
    current += changes[p];
    check(current);
}
```

The half-open range means the effect is no longer active at `end`.

## Array Or Sorted Events?

Use a direct array for a small coordinate domain. For huge sparse coordinates,
sort `(position, delta)` events and combine all deltas at the same position.

## When Not To Use It

A one-time sweep cannot answer arbitrary queries after every online update. Dynamic
range operations may require Fenwick or segment trees.

## Cost And C Risks

Cost is O(n + U) for a bounded domain or O(n log n) for sorted events. Find the true
maximum coordinate, allocate the endpoint cell, and define endpoint semantics.

## Practice In This Repository

[1094 - Car Pooling](../../../problems/1094-car-pooling/README.md) is the direct example. Compare its representation with [495 - Teemo Attacking](../../../problems/0495-teemo-attacking/README.md).

## Systems Bridge

Active-task counts, power budgets, channel occupancy, and configuration timelines
can all be represented as start/stop events.

