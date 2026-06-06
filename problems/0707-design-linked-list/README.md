# #0707 - Design Linked List

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Linked List, Design
- Hint: A dummy head makes insertion and deletion at index `0` much simpler.
- Solved date: 2026-06-05
- Source: https://leetcode.com/problems/design-linked-list/

## Problem Statement

TR: Kendi linked list implementasyonunu tasarla. Index ile okuma, basa ekleme,
sona ekleme, index'e ekleme, index'ten silme ve free islemlerini destekle.

EN: Design your own linked list implementation supporting get, add at head, add
at tail, add at index, delete at index, and cleanup operations.

## Starter Code (C)

```c
typedef struct MyLinkedList {

} MyLinkedList;

MyLinkedList* myLinkedListCreate(void) {

}

int myLinkedListGet(MyLinkedList* obj, int index) {

}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {

}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {

}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {

}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {

}

void myLinkedListFree(MyLinkedList* obj) {

}
```

## Parameters / Return

- `index`: Zero-based linked-list position.
- `val`: Value stored in the inserted node.
- `get`: Returns `-1` if the index is invalid.

## Examples

```text
Input:
["MyLinkedList","addAtHead","addAtTail","addAtIndex","get","deleteAtIndex","get"]
[[],[1],[3],[1,2],[1],[1],[1]]

Output:
[null,null,null,null,2,null,3]
```

## Constraints

- `0 <= index, val <= 1000`
- At most `2000` calls will be made to linked-list operations.

## Approach

Use a dummy head node. The dummy node is not real data; it is a stable node
before the first real element.

This makes operations cleaner:

- Add at head: insert after dummy.
- Add at tail: walk until `next == NULL`.
- Add at index: walk to the previous node, then link the new node.
- Delete at index: walk to the previous node, unlink and free the target node.

## Solution

- [solution.c](solution.c)
