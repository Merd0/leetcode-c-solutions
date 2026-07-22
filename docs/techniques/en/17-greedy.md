# 17 - Greedy

[Previous](16-divide-conquer-and-selection.md) | [Contents](README.md) | [Turkce](../tr/17-greedy.md) | [Next](18-intervals.md)

## Mental Model

A greedy algorithm makes a locally favorable choice and never revisits it. The hard
part is proving that this choice does not destroy a globally optimal future.

"Choose the largest" is not a proof. Use an exchange argument to transform an
optimal solution toward the greedy choice without worsening it, or show that the
greedy state is always at least as favorable as any alternative.

## Example Invariant

In Jump Game, `farthest` is the farthest index reachable using the processed prefix.

```c
int farthest = 0;
for (int i = 0; i < n; i++) {
    if (i > farthest) return false;
    if (i + a[i] > farthest) farthest = i + a[i];
}
return true;
```

Future feasibility depends on the farthest boundary, not on the exact jump sequence
used to reach it.

## Recognition Signals

Irreversible local decisions, one best frontier, or sorting followed by earliest-end
or lowest-cost choices that preserve maximum future freedom.

## When To Be Suspicious

If local choices lock future options in different ways, one summary may be
insufficient and DP may be needed. Actively search for small counterexamples.

## Cost And C Risks

Typical cost is O(n) or O(n log n) after sorting. Check overflow in reach values,
tie-breaking rules, and the proof behind sort direction.

## Practice In This Repository

[55 - Jump Game](../../../problems/0055-jump-game/README.md), [134 - Gas Station](../../../problems/0134-gas-station/README.md), [621 - Task Scheduler](../../../problems/0621-task-scheduler/README.md), and [2126 - Destroying Asteroids](../../../problems/2126-destroying-asteroids/README.md).

## Systems Bridge

Ready-task and resource choices may look greedy, but deadline-sensitive systems need
a proof that the local policy preserves required guarantees.

