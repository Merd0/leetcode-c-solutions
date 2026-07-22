# 27 - Fast And Slow Pointers

[Previous](26-linked-list-rewiring.md) | [Contents](README.md) | [Turkce](../tr/27-fast-and-slow-pointers.md) | [Next](28-recursion-and-backtracking.md)

## Mental Model

Pointers moving through the same linked structure at different speeds expose
information through relative distance. If slow moves one step and fast two, slow
reaches the middle when fast reaches the end; inside a cycle they eventually meet.

The proof depends on relative speed rather than sorted order.

## Middle-Point Invariant

```c
struct ListNode *slow = head;
struct ListNode *fast = head;

while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
}
```

Fast travels about twice as far. For even lengths, the selected middle depends on
initial positions and the loop condition.

## Cycle Proof

Without a cycle, fast reaches `NULL`. Inside a cycle, relative distance decreases
modulo the cycle length until it reaches zero, causing a meeting without a visited set.

## Other Uses

Maintain an N-node gap to find the Nth node from the end. For a palindrome, find
the middle, reverse the second half, and compare both halves.

## C Risks

Check both `fast` and `fast->next` before `fast->next->next`. Restore a temporarily
modified list when the caller expects the original structure.

## Practice In This Repository

[876 - Middle of the Linked List](../../../problems/0876-middle-of-the-linked-list/README.md), [141 - Linked List Cycle](../../../problems/0141-linked-list-cycle/README.md), [19 - Remove Nth From End](../../../problems/0019-remove-nth-node-from-end-of-list/README.md), [234 - Palindrome Linked List](../../../problems/0234-palindrome-linked-list/README.md), and [287 - Find the Duplicate Number](../../../problems/0287-find-the-duplicate-number/README.md).

## Systems Bridge

Cycle detection in buffer chains and one-pass midpoint splitting save visited memory
in constrained systems.

