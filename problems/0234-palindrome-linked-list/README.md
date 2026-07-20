# #0234 - Palindrome Linked List

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Linked List, Two Pointers, Stack, Recursion
- Hint: Compare the first half with the reversed second half.
- Solved date: 2026-05-24
- Source: https://leetcode.com/problems/palindrome-linked-list/

## Problem Statement

TR: Verilen tek yonlu linked list'in ileri ve geri okundugunda ayni deger siralamasini verip vermedigini kontrol et.

EN: Given the head of a singly linked list, determine whether the node values form a palindrome.

## Starter Code (C)

```c
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {

}
```

## Parameters / Return

- `head`: linked list'in ilk node'u.
- Returns `true` if the list is a palindrome, otherwise returns `false`.

## Examples

```text
Input: head = [1,2,2,1]
Output: true
Explanation: The values read the same from both directions.
```

```text
Input: head = [1,2]
Output: false
Explanation: Reading from the front gives 1,2 but from the back gives 2,1.
```

## Constraints

- Number of nodes is in the range `[1, 10^5]`.
- `0 <= Node.val <= 9`

## Approach

Find the middle using slow and fast pointers. If the list length is odd, skip
the middle node because it does not affect the palindrome check. Reverse the
second half, then compare it node by node with the first half.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
