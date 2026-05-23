# #0232 - Implement Queue using Stacks

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Stack, Design, Queue
- Companies: Not tracked in this repo
- Hint: Use one stack for incoming values and one stack for outgoing values.
- Solved: 2026-05-23
- LeetCode: https://leetcode.com/problems/implement-queue-using-stacks/

## Problem Statement

TR: Sadece stack mantigi kullanarak FIFO calisan bir queue tasarla. `push`, `pop`, `peek` ve `empty` islemlerini destekle.

EN: Implement a FIFO queue using stack behavior. Support `push`, `pop`, `peek`, and `empty`.

## Starter Code (C)

```c
typedef struct {

} MyQueue;

MyQueue* myQueueCreate() {

}
```

## Parameters

- `x`: Value pushed into the queue.
- `obj`: Queue object passed to operations.

## Return

TR: Queue islemlerine gore cikarilan veya ondeki eleman dondurulur.

EN: Operations return the popped value or the front value when needed.

## Examples

### Example 1

```text
Input:
["MyQueue","push","push","peek","pop","empty"]
[[],[1],[2],[],[],[]]
Output:
[null,null,null,1,1,false]
```

## Constraints

- `1 <= x <= 9`
- At most `100` calls are made.
- All `pop` and `peek` calls are valid.

## Approach

TR: Yeni elemanlar `in` stack'ine gider. `pop/peek` icin `out` bos ise `in` icindeki elemanlar ters sirayla `out` stack'ine aktarilir.

EN: New values go into the `in` stack. For `pop/peek`, if `out` is empty, move values from `in` to `out` to reverse the order.

## Solution

- [solution.c](solution.c)
