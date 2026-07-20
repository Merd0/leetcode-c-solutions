# #0083 - Remove Duplicates from Sorted List

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Linked List
- Hint: Since the list is sorted, duplicates appear next to each other.
- Solved date: 2026-05-24
- Source: https://leetcode.com/problems/remove-duplicates-from-sorted-list/

## Problem Statement

TR: Sirali linked list'teki tekrar eden degerleri sil. Her degerden sadece bir node kalmali.

EN: Given the head of a sorted linked list, delete duplicate nodes so each value appears only once.

## Starter Code (C)

```c
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {

}
```

## Parameters / Return

- `head`: sorted linked list'in ilk node'u.
- Returns the head of the list after duplicate nodes are skipped.

## Examples

```text
Input: head = [1,1,2]
Output: [1,2]
```

```text
Input: head = [1,1,2,3,3]
Output: [1,2,3]
```

## Constraints

- Number of nodes is in the range `[0, 300]`.
- `-100 <= Node.val <= 100`
- The list is sorted in non-decreasing order.

## Approach

Walk through the sorted list with `current`. If `current` and `current->next`
have the same value, bypass `current->next`. Otherwise, move forward.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
