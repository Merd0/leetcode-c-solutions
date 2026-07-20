# #0206 - Reverse Linked List

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Linked List, Recursion
- Hint: Keep `prev`, `current`, and the next node before changing links.
- Solved date: 2026-05-24
- Source: https://leetcode.com/problems/reverse-linked-list/

## Problem Statement

TR: Bir singly linked list verilir. Listenin baglantilarini ters cevir ve yeni bas node'u dondur.

EN: Given a singly linked list, reverse its links and return the new head.

## Starter Code (C)

```c
struct ListNode* reverseList(struct ListNode* head) {

}
```

## Parameters

- `head`: Head of the input linked list.

## Return

TR: Ters cevrilmis listenin yeni bas node'u.

EN: Return the new head after reversing the list.

## Examples

### Example 1

```text
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
```

### Example 2

```text
Input: head = [1,2]
Output: [2,1]
```

### Example 3

```text
Input: head = []
Output: []
```

## Constraints

- The number of nodes is in the range `[0, 5000]`.
- `-5000 <= Node.val <= 5000`

## Approach

TR: Iteratif olarak `current->next` yonu `prev` node'una cevrilir. Once `nextNode` saklanir, sonra baglanti terslenir, en sonunda `prev` ve `current` ilerletilir.

EN: Iteratively point `current->next` back to `prev`. Save `nextNode` first, reverse the link, then move `prev` and `current` forward.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
