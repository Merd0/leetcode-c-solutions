# 01 - Brute Force And Enumeration

[Contents](README.md) | [Turkce](../tr/01-brute-force-and-enumeration.md) | [Next](02-linear-scan-and-indexing.md)

## Mental Model

Brute force is not merely the solution used when no better idea appears. It is a
reference algorithm that generates every valid candidate and tests each candidate
correctly. It makes the search space and correctness condition visible before any
optimization begins.

Separate two questions: how many candidates exist, and how much does one test cost?
Three selected indexes commonly produce O(n^3) candidates. Scanning the array again
inside each test can make the total O(n^4).

## State And Invariant

Loop indexes represent the partial candidate built so far. At the innermost loop,
the candidate is complete. The invariant is that every candidate behind the loop
state has been tested exactly once.

```c
int count = 0;
for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        if (valid(a[i], a[j])) count++;
    }
}
```

Starting `j` at `i + 1` is part of the candidate definition. It prevents testing
both `(i, j)` and `(j, i)` when order does not matter.

## How To Improve It

1. Establish the correct baseline and small tests.
2. Mark information recomputed by the inner loop.
3. Ask whether a prefix summary, hash table, window, or sorting can preserve it.
4. Compare the optimized algorithm against the baseline on small random inputs.

## When It Is Not The Final Method

Do not stop at brute force when the input bound makes the candidate count impossible.
Keep it as a correctness model and test oracle.

## Cost And C Risks

Time is candidate count multiplied by test cost. Prove every `i + 1` and `i + 2`
access remains in bounds. Use `long long` when products or accumulated values can
exceed `int`.

## Practice In This Repository

Start with [1925 - Count Square Sum Triples](../../../problems/1925-count-square-sum-triples/README.md), then inspect repeated range work in [1588 - Sum of All Odd Length Subarrays](../../../problems/1588-sum-of-all-odd-length-subarrays/README.md).

## Systems Bridge

Exhaustive register combinations, protocol states, and test vectors use the same
idea. Coverage is the first goal when the input domain is deliberately small.

