# #0019 - Remove Nth Node From End of List

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Linked List, Two Pointers
- Hint: The node to delete can be found by counting length or by keeping a gap of `n`.
- Solved date: 2026-05-24
- Source: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

## Problem Statement

TR: Bir linked list ve `n` degeri veriliyor. Sondan `n`. node'u sil ve listenin yeni head'ini dondur.

EN: Given the head of a linked list, remove the nth node from the end of the list and return the new head.

## Starter Code (C)

```c
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

}
```

## Parameters / Return

- `head`: linked list'in ilk node'u.
- `n`: sondan silinecek node'un sirasi.
- Returns the head of the list after deletion.

## Examples

```text
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Explanation: The 2nd node from the end is 4.
```

```text
Input: head = [1], n = 1
Output: []
```

```text
Input: head = [1,2], n = 1
Output: [1]
```

## Constraints

- Number of nodes is `sz`.
- `1 <= sz <= 30`
- `0 <= Node.val <= 100`
- `1 <= n <= sz`

## Approach

Count the total number of nodes first. A dummy node is used before `head` so
the same deletion logic also works when the head itself must be removed. Move
to the node before the target and bypass the target node.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
