# #0021 - Merge Two Sorted Lists

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Linked List, Recursion
- Companies: Not tracked in this repo
- Hint: Use a dummy node and always attach the smaller current node.
- Solved: 2026-05-24
- LeetCode: https://leetcode.com/problems/merge-two-sorted-lists/

## Problem Statement

TR: Sirali iki linked list verilir. Bu iki listeyi tek bir sirali linked list olacak sekilde birlestir ve bas node'u dondur.

EN: Given two sorted linked lists, merge them into one sorted linked list and return its head.

## Starter Code (C)

```c
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

}
```

## Parameters

- `list1`: First sorted linked list.
- `list2`: Second sorted linked list.

## Return

TR: Birlestirilmis sirali linked list'in bas node'u.

EN: Return the head of the merged sorted linked list.

## Examples

### Example 1

```text
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
```

### Example 2

```text
Input: list1 = [], list2 = []
Output: []
```

### Example 3

```text
Input: list1 = [], list2 = [0]
Output: [0]
```

## Constraints

- The number of nodes in both lists is in the range `[0, 50]`.
- `-100 <= Node.val <= 100`
- Both `list1` and `list2` are sorted in non-decreasing order.

## Approach

TR: Dummy node kullanarak sonuc listesinin basini kolay yonet. `tail`, sonuc listesinin sonunu tutar. Kucuk olan node sonuc listesine baglanir, ilgili liste ilerletilir. Listelerden biri bitince kalan liste sona baglanir.

EN: Use a dummy node to manage the result head easily. `tail` tracks the end of the merged list. Attach the smaller current node and advance that list. When one list ends, attach the remaining part of the other list.

## Solution

- [solution.c](solution.c)
