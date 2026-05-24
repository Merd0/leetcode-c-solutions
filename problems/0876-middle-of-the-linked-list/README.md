# #0876 - Middle of the Linked List

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Linked List, Two Pointers
- Companies: Not tracked in this repo
- Hint: If the length is even, return the second middle node.
- Solved: 2026-05-24
- LeetCode: https://leetcode.com/problems/middle-of-the-linked-list/

## Problem Statement

TR: Bir linked list verilir. Listenin orta node'unu dondur. Iki orta node varsa ikincisini dondur.

EN: Given a linked list, return its middle node. If there are two middle nodes, return the second one.

## Starter Code (C)

```c
struct ListNode* middleNode(struct ListNode* head) {

}
```

## Parameters

- `head`: Head of the linked list.

## Return

TR: Orta node'un pointer'i.

EN: Return a pointer to the middle node.

## Examples

### Example 1

```text
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation:
Node 3 is the middle node.
```

### Example 2

```text
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation:
There are two middle nodes, 3 and 4, so return 4.
```

## Constraints

- The number of nodes is in the range `[1, 100]`.
- `1 <= Node.val <= 100`

## Approach

TR: Once toplam node sayisi sayilir. Orta indeks `count / 2` olarak bulunur. Sonra bas node'dan bu kadar ilerlenerek orta node dondurulur.

EN: First count the total number of nodes. The middle index is `count / 2`. Then move that many steps from the head and return the node found.

## Solution

- [solution.c](solution.c)
