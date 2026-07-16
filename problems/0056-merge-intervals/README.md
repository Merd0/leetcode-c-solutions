# #0056 - Merge Intervals

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Sorting, Intervals
- Hint: Sort by start, then keep one active interval.
- Solved date: 2026-07-17
- Source: https://leetcode.com/problems/merge-intervals/
- Note: Interval allocation practice in C

## Problem Statement

TR: Verilen interval listesindeki cakisan araliklari birlestir ve yeni interval
listesini dondur.

EN: Given a list of intervals, merge all overlapping intervals and return the
merged list.

## Starter Code (C)

```c
int** merge(int** intervals, int intervalsSize, int* intervalsColSize,
            int* returnSize, int** returnColumnSizes) {

}
```

## Examples

```text
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
```

```text
Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
```

## Approach

First sort intervals by start value. After sorting, one active interval is
enough:

```text
currentStart
currentEnd
```

For each next interval:

```text
nextStart <= currentEnd -> overlap, extend currentEnd if needed
nextStart > currentEnd  -> current is finished, emit it to result
```

After the loop, the last active interval must still be emitted because no later
interval arrives to close it.

## C Allocation Notes

LeetCode expects an `int**` result plus metadata:

```text
result[i]             -> one malloced interval row
result[i][0..1]       -> start and end
returnColumnSizes[i]  -> always 2 for this problem
returnSize            -> number of rows actually written
```

Allocate `intervalsSize` rows as the worst case because no merge can produce
more rows than the input.

## Complexity

- Time: `O(n log n)`
- Space: `O(n)` for the returned result

## Solution

- [solution.c](solution.c)
