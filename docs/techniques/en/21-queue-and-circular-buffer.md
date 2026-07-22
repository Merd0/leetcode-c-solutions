# 21 - Queue And Circular Buffer

[Previous](20-monotonic-stack.md) | [Contents](README.md) | [Turkce](../tr/21-queue-and-circular-buffer.md) | [Next](22-monotonic-queue.md)

## Mental Model

A queue is FIFO: the oldest item is removed first. It models arrival-order event
processing, breadth-first layers, and producer/consumer buffers.

A circular buffer connects the end of a fixed array back to its start. Pop advances
an index instead of shifting every remaining element.

## State Contract

Let `front` identify the first element, `rear` the next free slot, and `size` the
number of elements. Empty is `size == 0`; full is `size == capacity`.

```c
buffer[rear] = value;
rear = (rear + 1) % capacity;
size++;

int value = buffer[front];
front = (front + 1) % capacity;
size--;
```

Tracking size resolves whether `front == rear` means empty or full.

## Queue Simulation

When a participant returns next round, append a new logical time such as `index + n`
instead of shifting the array. This preserves order with constant-time operations.

## When Not To Use It

Use a heap for priority-first work, a stack for newest-first work, and a monotonic
queue for moving-window extrema.

## C Risks

Handle zero capacity, modulo by zero, full/empty distinction, ownership of pointed-to
items, and concurrent access separately.

## Practice In This Repository

[622 - Design Circular Queue](../../../problems/0622-design-circular-queue/README.md), [641 - Design Circular Deque](../../../problems/0641-design-circular-deque/README.md), [649 - Dota2 Senate](../../../problems/0649-dota2-senate/README.md), and [1700 - Students Unable to Eat Lunch](../../../problems/1700-number-of-students-unable-to-eat-lunch/README.md).

## Systems Bridge

UART RX/TX, DMA sample blocks, and ISR-to-main-loop event transfer are direct circular
buffer applications. Concurrency requires an additional atomicity design.

