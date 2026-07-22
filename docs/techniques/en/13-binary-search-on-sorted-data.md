# 13 - Binary Search On Sorted Data

[Previous](12-difference-arrays-and-event-sweeps.md) | [Contents](README.md) | [Turkce](../tr/13-binary-search-on-sorted-data.md) | [Next](14-binary-search-on-answer.md)

## Mental Model

Binary search is not just a midpoint formula. Each comparison must prove that one
half cannot contain the answer. The data or searched property must be monotone.

Choose a closed `[left, right]` or half-open `[left, right)` interval first. The
loop condition and updates must follow that choice consistently.

## Closed-Interval Invariant

If the target exists, it lies in `[left, right]` at the start of every iteration.

```c
int left = 0, right = n - 1;
while (left <= right) {
    int mid = left + (right - left) / 2;
    if (a[mid] == target) return mid;
    if (a[mid] < target) left = mid + 1;
    else right = mid - 1;
}
return -1;
```

`mid` has already been tested, so a failed side excludes it. Otherwise the search
can repeat the same state forever.

## Peaks And Rotated Arrays

The technique extends beyond fully sorted arrays. A rotated array has at least one
sorted half. In peak search, the comparison with `mid + 1` tells which side must
contain a peak. Each variant needs its own elimination proof.

## When Not To Use It

If a predicate can change from false to true and back again, there is no single
boundary to search. A linear scan may also be clearer for very small inputs.

## Cost And C Risks

Time O(log n), iterative space O(1). Use the overflow-safe midpoint and prove that
every `mid + 1` access remains inside the interval.

## Practice In This Repository

[704 - Binary Search](../../../problems/0704-binary-search/README.md), [34 - First and Last Position](../../../problems/0034-find-first-and-last-position-of-element-in-sorted-array/README.md), [153 - Find Minimum in Rotated Array](../../../problems/0153-find-minimum-in-rotated-sorted-array/README.md), and [74 - Search a 2D Matrix](../../../problems/0074-search-a-2d-matrix/README.md).

## Systems Bridge

Calibration tables, timestamped logs, and LUT thresholds often expose monotone
boundaries that support binary search.

