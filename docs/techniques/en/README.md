# Problem-Solving Techniques In C

[Language selection](../README.md) | [Türkçe](../tr/README.md) | [Repository home](../../../README.md) | [Problem index](../../PROBLEM_INDEX.md) | [Topic index](../../TOPIC_INDEX.md)

This guide separates the recurring reasoning patterns used across the repository.
Its purpose is not to teach code templates by rote. It teaches how to choose the
right state, state an invariant, and explain why each transition preserves the
solution.

Every chapter follows the same learning order:

1. Mental model and recognition signals.
2. State, invariant, and transition.
3. Why the method works and which assumption it needs.
4. A compact C model plus boundary and memory risks.
5. Failure cases and an ordered practice path from this repository.
6. A bridge to embedded systems or electro-optical workloads.

## Chapters

| No. | Technique | Core idea |
| --- | --- | --- |
| 01 | [Brute force and enumeration](01-brute-force-and-enumeration.md) | Build a correct reference, then locate repeated work. |
| 02 | [Linear scan and indexing](02-linear-scan-and-indexing.md) | Carry sufficient state through one pass. |
| 03 | [Simulation and state machines](03-simulation-and-state-machines.md) | Turn commands into explicit state transitions. |
| 04 | [Counting and frequency tables](04-counting-and-frequency-tables.md) | Directly index a small value domain. |
| 05 | [Hash tables](05-hash-tables.md) | Obtain average O(1) access over a large key space. |
| 06 | [Two pointers](06-two-pointers.md) | Move two boundaries monotonically and meaningfully. |
| 07 | [In-place read/write compaction](07-in-place-read-write.md) | Separate consumed input from valid output. |
| 08 | [Fixed-size sliding window](08-fixed-sliding-window.md) | Move a window by removing one item and adding one. |
| 09 | [Variable-size sliding window](09-variable-sliding-window.md) | Grow until invalid, then shrink until valid. |
| 10 | [Prefix sums](10-prefix-sums.md) | Turn a range query into the difference of two summaries. |
| 11 | [Prefix state, XOR, and product](11-prefix-state-xor-and-product.md) | Carry composable summaries beyond addition. |
| 12 | [Difference arrays and event sweeps](12-difference-arrays-and-event-sweeps.md) | Record where an interval starts and stops changing state. |
| 13 | [Binary search on sorted data](13-binary-search-on-sorted-data.md) | Prove that one half cannot contain the answer. |
| 14 | [Binary search on the answer](14-binary-search-on-answer.md) | Search a monotone feasibility boundary. |
| 15 | [Sorting and buckets](15-sorting-and-buckets.md) | Expose local decisions through preprocessing. |
| 16 | [Divide-and-conquer and selection](16-divide-conquer-and-selection.md) | Split the problem or seek only the required rank. |
| 17 | [Greedy](17-greedy.md) | Prove that a local choice does not damage the future. |
| 18 | [Intervals](18-intervals.md) | Process sorted ranges with one active interval. |
| 19 | [Stack](19-stack.md) | Close the most recently opened work first. |
| 20 | [Monotonic stack](20-monotonic-stack.md) | Remove candidates that can no longer answer a query. |
| 21 | [Queue and circular buffer](21-queue-and-circular-buffer.md) | Preserve FIFO order with constant-time index movement. |
| 22 | [Monotonic queue](22-monotonic-queue.md) | Keep only useful extrema for a moving window. |
| 23 | [Heap and Top-K](23-heap-and-top-k.md) | Retain only the strongest K candidates. |
| 24 | [Streams and iterators](24-streams-and-iterators.md) | Carry sufficient history without knowing the future. |
| 25 | [Stateful APIs, design, and ownership](25-stateful-apis-design-and-ownership.md) | Design object lifetime, invariants, and memory ownership together. |
| 26 | [Linked-list rewiring](26-linked-list-rewiring.md) | Rebuild links safely rather than moving values. |
| 27 | [Fast and slow pointers](27-fast-and-slow-pointers.md) | Use relative speed to expose cycles or middle positions. |
| 28 | [Recursion and backtracking](28-recursion-and-backtracking.md) | Define the subproblem contract and undo choices. |
| 29 | [Tree and graph traversal](29-tree-and-graph-traversal.md) | Select DFS or BFS according to the information needed. |
| 30 | [Dynamic programming and Kadane](30-dynamic-programming-and-kadane.md) | Store repeated subproblem state. |
| 31 | [Bitwise, XOR, and number theory](31-bitwise-xor-and-number-theory.md) | Treat bits as independent state channels. |
| 32 | [Strings, parsing, and pattern matching](32-strings-parsing-and-pattern-matching.md) | Read text as a character stream with parser state. |
| 33 | [Matrix traversal and direction arrays](33-matrix-traversal-and-directions.md) | Fix the row/column contract and neighbor movements. |
| 34 | [Matrix neighborhoods and in-place state](34-matrix-neighborhoods-and-in-place-state.md) | Process bounded neighborhoods while separating old and new state. |
| 35 | [2D prefix sums and image regions](35-2d-prefix-sum-and-image-regions.md) | Answer rectangular regions from four prefix values. |

## Study Method

After reading a chapter, hide its C model and restate the invariant in your own
words. Then solve the first listed problem without notes. Working code is not yet
mastery if you cannot explain why the invariant remains true.

## Bridges Back To C Foundations

When the algorithm is clear but pointers, allocation, bit width, or parser mechanics
remain unclear, return to the matching `c-systems-foundation` module:

- [Arrays](https://github.com/Merd0/c-systems-foundation/tree/main/en/arrays)
- [Pointers](https://github.com/Merd0/c-systems-foundation/tree/main/en/pointers)
- [Memory management](https://github.com/Merd0/c-systems-foundation/tree/main/en/memory_management)
- [Data structures](https://github.com/Merd0/c-systems-foundation/tree/main/en/data_structures)
- [Bitwise operations](https://github.com/Merd0/c-systems-foundation/tree/main/en/bitwise)
- [Strings and parsing](https://github.com/Merd0/c-systems-foundation/tree/main/en/strings_parsing)
- [Algorithms](https://github.com/Merd0/c-systems-foundation/tree/main/en/algorithms)
- [LeetCode learning bridge](https://github.com/Merd0/c-systems-foundation/blob/main/en/notes/leetcode_bridge.md)
