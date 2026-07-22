# 30 - Dynamic Programming And Kadane

[Previous](29-tree-and-graph-traversal.md) | [Contents](README.md) | [Turkce](../tr/30-dynamic-programming-and-kadane.md) | [Next](31-bitwise-xor-and-number-theory.md)

## Mental Model

Dynamic programming stores answers when the same subproblems recur. A table alone
does not make an algorithm DP. The essential pieces are a sufficient state, a
transition, base cases, and repeated use of prior subproblem answers.

Define `dp[i]` in one sentence before writing its recurrence.

## Kadane State

For maximum subarray, `ending_here` is the best sum that must end exactly at index i.
The new value either starts a new range or extends the prior best suffix.

```c
long long ending_here = a[0];
long long best = a[0];

for (int i = 1; i < n; i++) {
    long long extend = ending_here + a[i];
    ending_here = extend > a[i] ? extend : a[i];
    if (ending_here > best) best = ending_here;
}
```

`best` is the global result; `ending_here` is a narrower transition state. Starting
both at zero fails when every value is negative.

## Memoization And Tabulation

Memoization computes demanded states recursively. Tabulation fills states in
dependency order without call-stack use. If only a few prior states are needed,
compress the table into rolling variables.

## When It Is Not DP

Non-overlapping subproblems favor divide-and-conquer. A proven greedy invariant may
remove the need for DP entirely.

## C Risks

Check all-negative initialization, allocation-size multiplication, sentinel
collisions, and dependency order.

## Practice In This Repository

[53 - Maximum Subarray](../../../problems/0053-maximum-subarray/README.md), [152 - Maximum Product Subarray](../../../problems/0152-maximum-product-subarray/README.md), and [845 - Longest Mountain](../../../problems/0845-longest-mountain-in-array/README.md).

## Systems Bridge

Sequence optimization may use DP, while embedded targets often require rolling
state to remain inside a strict RAM budget.

