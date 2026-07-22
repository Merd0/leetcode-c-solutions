# 28 - Recursion And Backtracking

[Previous](27-fast-and-slow-pointers.md) | [Contents](README.md) | [Turkce](../tr/28-recursion-and-backtracking.md) | [Next](29-tree-and-graph-traversal.md)

## Mental Model

Recursion solves a smaller instance under the same function contract. Every design
needs a base case, a measure that strictly decreases, and a precise meaning for the
returned value.

Backtracking adds a choice tree: make a choice, explore its descendants, then undo
the mutation before exploring a sibling branch.

## Contract And Invariant

```c
void search(int index) {
    if (index == n) {
        record_if_valid();
        return;
    }

    choose(index);
    search(index + 1);
    undo(index);
    search(index + 1);
}
```

`search(index)` explores every completion while the first `index` decisions remain
fixed. On return, mutable state must match its value before the call.

## Correctness Idea

The base case evaluates a complete candidate. If recursive branches cover every
valid next choice without overlap, no candidate is missed or duplicated.

## Recursion Or Iteration?

Trees naturally match recursive structure. Large or unbounded depth risks call-stack
overflow; an explicit stack makes memory limits visible.

## C Risks

Non-progressing calls, returning local buffer addresses, failing to undo shared
state, and deep recursion are especially dangerous in embedded code.

## Practice In This Repository

[104 - Maximum Depth of Binary Tree](../../../problems/0104-maximum-depth-of-binary-tree/README.md), [226 - Invert Binary Tree](../../../problems/0226-invert-binary-tree/README.md), and [24 - Swap Nodes in Pairs](../../../problems/0024-swap-nodes-in-pairs/README.md).

## Systems Bridge

Protocol grammars and hierarchical configuration can be recursive. Hard real-time
code often prefers an explicit bounded stack unless maximum depth is proven.

