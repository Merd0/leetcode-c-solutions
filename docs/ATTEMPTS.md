# Attempts And Learning Notes

[Repository home](../README.md) | [Problem index](PROBLEM_INDEX.md) | [Learning roadmap](LEARNING_ROADMAP.md) | [Technique guide](techniques/en/README.md)

Attempts are intentionally separate from accepted solutions and are not included in repository solution counts.

| # | Problem | Result | Why it failed | Learn before retrying | Retry direction |
| ---: | --- | --- | --- | --- | --- |
| #3691 | [Maximum Total Subarray Value II](../attempts/3691-maximum-total-subarray-value-ii/) | TLE | Materializes and sorts all `O(n^2)` subarray values | Max heap, segment tree range queries, best-first search | Generate only the current best candidates instead of all subarrays |

Each attempt folder keeps its original code and detailed reasoning. When an attempt becomes accepted, create the canonical problem folder under `problems/`; do not silently rename the failed code into `solution.c` without documenting the improved approach.
