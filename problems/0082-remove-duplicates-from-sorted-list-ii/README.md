# #0082 - Remove Duplicates from Sorted List II

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Linked List, Two Pointers
- Hint: When a duplicate value is found, skip the whole group.
- Solved date: 2026-05-24
- Source: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

## Problem Statement

TR: Sirali linked list'te tekrar eden tum deger gruplarini tamamen sil. Sadece listede bir kez gecen degerler kalmali.

EN: Given the head of a sorted linked list, remove every value that appears more than once and return only distinct values.

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
- Returns the head of the list after all duplicate value groups are removed.

## Examples

```text
Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]
Explanation: Values 3 and 4 appear more than once, so all of their nodes are removed.
```

```text
Input: head = [1,1,1,2,3]
Output: [2,3]
Explanation: Value 1 is a duplicate group, so none of the 1 nodes remain.
```

## Constraints

- Number of nodes is in the range `[0, 300]`.
- `-100 <= Node.val <= 100`
- The list is sorted in non-decreasing order.

## Approach

Use a dummy node before `head` because the first real node may be deleted. When
`current` starts a duplicate group, remember that value and move `current`
until the group ends. Then connect `prev` to the first non-duplicate node.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
