# 18 - Intervals

[Previous](17-greedy.md) | [Contents](README.md) | [Turkce](../tr/18-intervals.md) | [Next](19-stack.md)

## Mental Model

An interval is more than two endpoints. Whether endpoints are included is part of
the contract. Closed `[a, b]` ranges may overlap when endpoints touch, while a
half-open time range `[a, b)` ends before an event at `b` begins.

Sorting by start turns all future overlap decisions into comparisons with one active
interval.

## Invariant

The processed prefix is fully merged, while `currentStart, currentEnd` represents
the last merged interval not yet emitted.

```c
if (next_start <= current_end) {
    if (next_end > current_end) current_end = next_end;
} else {
    emit(current_start, current_end);
    current_start = next_start;
    current_end = next_end;
}
```

Emit the active interval once more after the loop.

## Relationship To Event Sweeps

Use full intervals when merged ranges are required. Use `+x` and `-x` endpoint
events when the question asks for active totals or capacity.

## When Not To Use It

One-time sorting is insufficient for frequently updated and queried intervals;
dynamic interval structures may be required.

## Cost And C Risks

Sorting costs O(n log n), scanning O(n). For an `int **` result, allocate pointer
slots with `sizeof(int *)`, then two integer cells per emitted row. Maintain output
row count and column sizes exactly as the API requires.

## Practice In This Repository

[56 - Merge Intervals](../../../problems/0056-merge-intervals/README.md), [495 - Teemo Attacking](../../../problems/0495-teemo-attacking/README.md), and [1094 - Car Pooling](../../../problems/1094-car-pooling/README.md).

## Systems Bridge

Sensor activity windows, task schedules, validity periods, and resource reservations
all depend on precise endpoint semantics.

