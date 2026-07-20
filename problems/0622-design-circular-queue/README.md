# #0622 - Design Circular Queue

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Design, Queue
- Hint: Use modulo arithmetic to wrap indices back to the beginning of the buffer.
- Solved date: 2026-06-05
- Source: https://leetcode.com/problems/design-circular-queue/

## Problem Statement

TR: Sabit kapasiteli circular queue tasarla. Eleman ekleme, eleman silme, front
okuma, rear okuma, bos/dolu kontrolu islemlerini destekle.

EN: Design a fixed-size circular queue supporting enqueue, dequeue, front, rear,
empty check, and full check operations.

## Starter Code (C)

```c
typedef struct {

} MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k) {

}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {

}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {

}

int myCircularQueueFront(MyCircularQueue* obj) {

}

int myCircularQueueRear(MyCircularQueue* obj) {

}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {

}

bool myCircularQueueIsFull(MyCircularQueue* obj) {

}

void myCircularQueueFree(MyCircularQueue* obj) {

}
```

## Parameters / Return

- `k`: Maximum number of elements the queue can hold.
- `value`: Value inserted into the queue.
- `Front` / `Rear`: Return `-1` when the queue is empty.
- Boolean operations return whether the requested action succeeded.

## Examples

```text
Input:
["MyCircularQueue","enQueue","enQueue","enQueue","enQueue","Rear","isFull","deQueue","enQueue","Rear"]
[[3],[1],[2],[3],[4],[],[],[],[4],[]]

Output:
[null,true,true,true,false,3,true,true,true,4]
```

## Constraints

- `1 <= k <= 1000`
- `0 <= value <= 1000`
- At most `3000` calls will be made to the queue operations.

## Approach

Store values in a fixed-size array and keep:

- `front`: index of the current front element.
- `rear`: index of the current rear element.
- `size`: current element count.
- `capacity`: maximum element count.

Insertion moves `rear` with `(rear + 1) % capacity`. Deletion moves `front` with
`(front + 1) % capacity`. The `size` field makes empty/full checks simple and
avoids ambiguous `front == rear` states.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
