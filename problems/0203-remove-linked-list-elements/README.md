# #0203 - Remove Linked List Elements

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Linked List, Recursion
- Companies: Not tracked in this repo
- Hint: A dummy node makes removing the head node no different from removing any other node.
- Solved: 2026-05-24
- LeetCode: https://leetcode.com/problems/remove-linked-list-elements/

## Problem Statement

TR: Bir linked list ve `val` verilir. Degeri `val` olan tum node'lari listeden kaldir ve yeni head'i dondur.

EN: Given a linked list and `val`, remove every node whose value equals `val` and return the new head.

## Starter Code (C)

```c
struct ListNode* removeElements(struct ListNode* head, int val) {

}
```

## Parameters

- `head`: Head of the linked list.
- `val`: Value to remove.

## Return

TR: Silme islemlerinden sonraki listenin head node'u.

EN: Return the head of the list after removals.

## Examples

### Example 1

```text
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
```

### Example 2

```text
Input: head = [], val = 1
Output: []
```

### Example 3

```text
Input: head = [7,7,7,7], val = 7
Output: []
```

## Constraints

- The number of nodes is in the range `[0, 10^4]`.
- `1 <= Node.val <= 50`
- `0 <= val <= 50`

## Approach

TR: Dummy node kullanilir. `prev` silinmeyen son node'u, `current` incelenen node'u tutar. `current->val == val` ise `prev->next`, `current->next`e baglanir; aksi halde iki pointer da ilerler.

EN: Use a dummy node. `prev` tracks the last kept node and `current` tracks the node being checked. If `current->val == val`, connect `prev->next` to `current->next`; otherwise move both pointers forward.

## Solution

- [solution.c](solution.c)
