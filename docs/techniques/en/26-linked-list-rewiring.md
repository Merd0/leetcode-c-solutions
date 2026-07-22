# 26 - Linked-List Rewiring

[Previous](25-stateful-apis-design-and-ownership.md) | [Contents](README.md) | [Turkce](../tr/26-linked-list-rewiring.md) | [Next](27-fast-and-slow-pointers.md)

## Mental Model

Linked-list algorithms change `next` relationships rather than moving node storage.
Save the continuation before overwriting a link; a lost next pointer cannot be
reconstructed.

Give each pointer a role: `prev` is the completed region, `curr` the node being
processed, and `next` the untouched suffix.

## Reverse Invariant

```c
struct ListNode *prev = NULL;
struct ListNode *curr = head;

while (curr != NULL) {
    struct ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
}
return prev;
```

At loop entry, `prev` heads a correctly reversed prefix and `curr` heads the
unprocessed suffix. One node moves between those regions per iteration.

## Dummy Head

A dummy node removes special handling for deleting or appending at the real head.
It is not part of the result; return `dummy.next`.

## Ownership

Some platform problems expect only rewiring; others may require freeing removed
nodes. In production, the list API must explicitly assign node ownership.

## C Risks

Use-after-free, overwriting a link before saving it, accidental cycles, and forgetting
`head == NULL` are common. Draw pointer roles before coding.

## Practice In This Repository

[206 - Reverse Linked List](../../../problems/0206-reverse-linked-list/README.md), [21 - Merge Two Sorted Lists](../../../problems/0021-merge-two-sorted-lists/README.md), [82 - Remove Duplicates II](../../../problems/0082-remove-duplicates-from-sorted-list-ii/README.md), and [2 - Add Two Numbers](../../../problems/0002-add-two-numbers/README.md).

## Systems Bridge

Intrusive lists, free lists, and buffer descriptor chains rewire pointers without
copying payloads. Errors directly threaten memory integrity.

