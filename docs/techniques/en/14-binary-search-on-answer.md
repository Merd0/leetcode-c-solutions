# 14 - Binary Search On The Answer

[Previous](13-binary-search-on-sorted-data.md) | [Contents](README.md) | [Turkce](../tr/14-binary-search-on-answer.md) | [Next](15-sorting-and-buckets.md)

## Mental Model

Sometimes the input is not sorted, but possible answers are ordered. If capacity
`C` is feasible and every larger capacity is also feasible, the predicate has one
false-to-true boundary.

Binary search locates the first feasible answer. The central work is defining
`feasible(candidate)` and proving monotonicity.

## Search Bounds

For shipping capacity, the lower bound is the heaviest package and the upper bound
is the total weight. These are proven answer bounds, not guesses.

```c
while (left < right) {
    int mid = left + (right - left) / 2;
    if (feasible(mid)) right = mid;
    else left = mid + 1;
}
return left;
```

A feasible `mid` may be the answer, so it remains in the interval. An infeasible
`mid` is eliminated completely.

## Feasibility Test

The test is often an O(n) simulation. The outer search contributes O(log range),
for total O(n log range).

## When Not To Use It

It fails when feasibility oscillates rather than forming one boundary. Direct
enumeration may also be simpler for a tiny answer range.

## C Risks

The upper-bound sum can overflow. Every test call must rebuild local state and
preserve constraints such as original package order.

## Practice In This Repository

[1011 - Capacity to Ship Packages](../../../problems/1011-capacity-to-ship-packages-within-d-days/README.md), [69 - Sqrt(x)](../../../problems/0069-sqrtx/README.md), and [2300 - Successful Pairs](../../../problems/2300-successful-pairs-of-spells-and-potions/README.md).

## Systems Bridge

Minimum buffer size, bandwidth, period, or power budget can be searched when a
simulation provides a monotone pass/fail test.

