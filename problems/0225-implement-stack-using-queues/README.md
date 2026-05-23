# #0225 - Implement Stack using Queues

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Stack, Design, Queue
- Companies: Not tracked in this repo
- Hint: After pushing a value, rotate older values behind it so the newest value stays at the front.
- Solved: 2026-05-23
- LeetCode: https://leetcode.com/problems/implement-stack-using-queues/

## Problem Statement

TR: Queue mantigi kullanarak LIFO calisan bir stack tasarla. `push`, `pop`, `top` ve `empty` islemlerini destekle.

EN: Implement a LIFO stack using queue behavior. Support `push`, `pop`, `top`, and `empty`.

## Starter Code (C)

```c
typedef struct {

} MyStack;

MyStack* myStackCreate() {

}
```

## Parameters

- `x`: Value pushed into the stack.
- `obj`: Stack object passed to operations.

## Return

TR: Stack islemlerine gore cikarilan veya ustteki eleman dondurulur.

EN: Operations return the popped value or the top value when needed.

## Examples

### Example 1

```text
Input:
["MyStack","push","push","top","pop","empty"]
[[],[1],[2],[],[],[]]
Output:
[null,null,null,2,2,false]
```

## Constraints

- `1 <= x <= 9`
- At most `100` calls are made.
- All `pop` and `top` calls are valid.

## Approach

TR: Tek diziyle queue gibi tut. Yeni elemani ekledikten sonra eski elemanlari arkaya dondurerek yeni elemani en one al. Boylece `pop/top` direkt ondeki eleman olur.

EN: Use one array like a queue. After pushing the new value, rotate older values behind it so the newest value becomes the front. Then `pop/top` works from the front.

## Solution

- [solution.c](solution.c)
