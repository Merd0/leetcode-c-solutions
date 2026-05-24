# #0024 - Swap Nodes in Pairs

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Linked List, Recursion
- Hint: Use a dummy node because the head changes after the first swap.
- Solved date: 2026-05-24
- Source: LeetCode #24

## Problem Statement

TR: Verilen linked list'te node'lari ikili gruplar halinde yer degistir. Node degerlerini degistirme; baglantilari degistir.

EN: Given a linked list, swap every two adjacent nodes and return the head of the modified list.

## Starter Code (C)

```c
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {

}
```

## Parameters / Return

- `head`: linked list'in ilk node'u.
- Returns the head after adjacent pairs are swapped.

## Examples

```text
Input: head = [1,2,3,4]
Output: [2,1,4,3]
```

```text
Input: head = []
Output: []
```

```text
Input: head = [1]
Output: [1]
```

## Constraints

- Number of nodes is in the range `[0, 100]`.
- `0 <= Node.val <= 100`

## Approach

Use a dummy node before the list. For each pair, keep `prev`, `first`, and
`second` pointers, then reconnect links as `prev -> second -> first -> next`.
After each swap, move `prev` to the end of the swapped pair.
