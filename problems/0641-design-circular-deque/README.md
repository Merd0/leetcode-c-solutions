# #0641 - Design Circular Deque

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Design, Queue
- Hint: Both front and rear can move in either direction with modulo arithmetic.
- Solved date: 2026-06-05
- Source: https://leetcode.com/problems/design-circular-deque/

## Problem Statement

TR: Sabit kapasiteli circular deque tasarla. Hem bastan hem sondan ekleme/silme,
front/rear okuma, bos/dolu kontrolu islemlerini destekle.

EN: Design a fixed-size circular deque that supports insertion and deletion at
both ends, plus front/rear access and empty/full checks.

## Starter Code (C)

```c
typedef struct {

} MyCircularDeque;

MyCircularDeque* myCircularDequeCreate(int k) {

}

bool myCircularDequeInsertFront(MyCircularDeque* obj, int value) {

}

bool myCircularDequeInsertLast(MyCircularDeque* obj, int value) {

}

bool myCircularDequeDeleteFront(MyCircularDeque* obj) {

}

bool myCircularDequeDeleteLast(MyCircularDeque* obj) {

}

int myCircularDequeGetFront(MyCircularDeque* obj) {

}

int myCircularDequeGetRear(MyCircularDeque* obj) {

}

bool myCircularDequeIsEmpty(MyCircularDeque* obj) {

}

bool myCircularDequeIsFull(MyCircularDeque* obj) {

}

void myCircularDequeFree(MyCircularDeque* obj) {

}
```

## Parameters / Return

- `k`: Maximum capacity of the deque.
- `value`: Value inserted into the deque.
- Get operations return `-1` when the deque is empty.
- Boolean operations return whether the requested action succeeded.

## Examples

```text
Input:
["MyCircularDeque","insertLast","insertLast","insertFront","insertFront","getRear","isFull","deleteLast","insertFront","getFront"]
[[3],[1],[2],[3],[4],[],[],[],[4],[]]

Output:
[null,true,true,true,false,2,true,true,true,4]
```

## Constraints

- `1 <= k <= 1000`
- `0 <= value <= 1000`
- At most `2000` calls will be made to the deque operations.

## Approach

The deque owns a fixed array plus four pieces of state:

- `front`
- `rear`
- `size`
- `capacity`

When inserting at the front, move `front` backward with:

```text
(front - 1 + capacity) % capacity
```

When inserting at the rear, move `rear` forward with:

```text
(rear + 1) % capacity
```

The `size` field separates empty and full states cleanly.

## Solution

- [solution.c](solution.c)
