# 16 - Divide-And-Conquer And Selection

[Previous](15-sorting-and-buckets.md) | [Contents](README.md) | [Turkce](../tr/16-divide-conquer-and-selection.md) | [Next](17-greedy.md)

## Mental Model

Divide-and-conquer splits a problem into smaller independent instances, solves them,
and combines their results. Selection problems ask for one rank rather than complete
order, so they avoid computing information that the answer does not need.

Define the subproblem boundary, base case, and combine operation. The combine cost
often determines the final complexity.

## Quickselect Idea

Partitioning places a pivot in its final rank. Only the side containing the target
rank needs further work.

```c
while (left <= right) {
    int pivot_index = partition(a, left, right);
    if (pivot_index == target) return a[pivot_index];
    if (pivot_index < target) left = pivot_index + 1;
    else right = pivot_index - 1;
}
```

Expected time is O(n), but consistently poor pivots produce O(n^2). Randomization
reduces that risk without removing the theoretical worst case.

## Recursive Contract

Every recursive call must satisfy the same contract for its own interval. The
combine step should depend only on those contracts, not hidden shared state.

## When Not To Use It

Heavy overlap between subproblems points toward memoization or DP. Full sorting may
be clearer for small data.

## C Risks

Partition boundaries, recursion depth, duplicates that stall pointers, and pivot
selection all need explicit tests.

## Practice In This Repository

[347 - Top K Frequent Elements](../../../problems/0347-top-k-frequent-elements/README.md) supports comparing bucket, heap, and quickselect approaches. [75 - Sort Colors](../../../problems/0075-sort-colors/README.md) reinforces partition reasoning.

## Systems Bridge

Median or percentile extraction from measurement blocks may need only one rank,
not a complete sort.

