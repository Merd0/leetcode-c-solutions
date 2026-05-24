# #0141 - Linked List Cycle

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Linked List, Two Pointers
- Companies: Not tracked in this repo
- Hint: Move one pointer slowly and another pointer twice as fast.
- Solved: 2026-05-24
- LeetCode: https://leetcode.com/problems/linked-list-cycle/

## Problem Statement

TR: Bir linked list verilir. Listede herhangi bir node tekrar ziyaret ediliyorsa cycle vardir. Cycle olup olmadigini dondur.

EN: Given a linked list, determine whether it has a cycle, meaning some node can be reached again by following `next` pointers.

## Starter Code (C)

```c
bool hasCycle(struct ListNode *head) {

}
```

## Parameters

- `head`: Head of the linked list.

## Return

TR: Cycle varsa `true`, yoksa `false`.

EN: Return `true` if a cycle exists; otherwise return `false`.

## Examples

### Example 1

```text
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation:
The tail connects back to index 1.
```

### Example 2

```text
Input: head = [1,2], pos = 0
Output: true
```

### Example 3

```text
Input: head = [1], pos = -1
Output: false
```

## Constraints

- The number of nodes is in the range `[0, 10^4]`.
- `-10^5 <= Node.val <= 10^5`
- `pos` is used by the platform to describe the cycle and is not passed to the function.

## Approach

TR: Floyd cycle detection kullanilir. `slow` bir adim, `fast` iki adim ilerler. Cycle varsa bir noktada bulusurlar. `fast` `NULL` olursa cycle yoktur.

EN: Use Floyd's cycle detection. `slow` moves one step and `fast` moves two steps. If a cycle exists, they meet; if `fast` reaches `NULL`, there is no cycle.

## Solution

- [solution.c](solution.c)
