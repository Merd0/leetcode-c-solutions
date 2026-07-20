# #0237 - Delete Node in a Linked List

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Linked List
- Hint: You are not given the head, so copy the next node into the current node.
- Solved date: 2026-05-24
- Source: https://leetcode.com/problems/delete-node-in-a-linked-list/

## Problem Statement

TR: Bir linked list node'u verilir, fakat head verilmez. Verilen node listeden silinmelidir. Verilen node son node degildir.

EN: Given a node in a linked list, but not the head, delete that node from the list. The given node is not the tail.

## Starter Code (C)

```c
void deleteNode(struct ListNode* node) {

}
```

## Parameters

- `node`: The node to delete.

## Return

TR: Fonksiyon `void` doner; silme islemi node baglantilari uzerinde yapilir.

EN: The function returns `void`; the deletion is done by modifying node values and links.

## Examples

### Example 1

```text
Input: head = [4,5,1,9], node = 5
Output: [4,1,9]
```

### Example 2

```text
Input: head = [4,5,1,9], node = 1
Output: [4,5,9]
```

## Constraints

- The number of nodes is in the range `[2, 1000]`.
- `-1000 <= Node.val <= 1000`
- The given node is not the tail.

## Approach

TR: Head verilmedigi icin onceki node'a ulasilamaz. Bu yuzden sonraki node'un degeri mevcut node'a kopyalanir ve mevcut node, sonraki node'un sonrasina baglanir.

EN: Since the head is not given, the previous node cannot be reached. Copy the next node's value into the current node, then bypass the next node.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
