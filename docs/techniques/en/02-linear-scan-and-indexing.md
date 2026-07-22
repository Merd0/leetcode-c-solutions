# 02 - Linear Scan And Indexing

[Previous](01-brute-force-and-enumeration.md) | [Contents](README.md) | [Turkce](../tr/02-linear-scan-and-indexing.md) | [Next](03-simulation-and-state-machines.md)

## Mental Model

A linear scan reads each element once and carries a small summary instead of the
entire past. That summary may be a minimum, maximum, count, last value, or a few
state variables.

Ask: what information from the past is truly required at index `i`? If the answer
has constant size, O(n) time and O(1) extra space are often possible.

## Building The Invariant

For a best buy/sell difference, `min_seen` is the smallest value through the current
index and `best` is the best completed result so far.

```c
int min_seen = a[0];
int best = 0;

for (int i = 1; i < n; i++) {
    int candidate = a[i] - min_seen;
    if (candidate > best) best = candidate;
    if (a[i] < min_seen) min_seen = a[i];
}
```

Update order matters. Evaluate the current value against the past summary before
adding it to the summary used by future iterations.

## Index Contract

If a loop reads `a[i + 1]`, its condition must guarantee `i + 1 < n`. "Scan to the
end" is vague; the real contract states which neighbor indexes are valid at loop entry.

## When One Summary Is Insufficient

Use a hash table for membership in a large past set, a window for a moving range,
or a monotonic stack for a future greater value. A linear scan still exists, but
its state structure becomes richer.

## Cost And C Risks

Time is O(n), extra space is O(1). Check an empty input before reading `a[0]`, and
choose accumulator types from the maximum possible input.

## Practice In This Repository

[121 - Best Time to Buy and Sell Stock](../../../problems/0121-best-time-to-buy-and-sell-stock/README.md), [495 - Teemo Attacking](../../../problems/0495-teemo-attacking/README.md), and [845 - Longest Mountain in Array](../../../problems/0845-longest-mountain-in-array/README.md).

## Systems Bridge

Peak, minimum, threshold crossing, and consecutive-change detection over ADC samples
are usually one-pass scans. Small summaries matter when RAM is constrained.

