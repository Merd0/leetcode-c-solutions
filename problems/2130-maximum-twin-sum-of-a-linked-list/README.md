# #2130 - Maximum Twin Sum of a Linked List

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Linked List, Two Pointers, Stack
- Hint: Reverse the second half so twin nodes can be visited together.
- Solved date: 2026-06-14
- Source: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/
- Note: Daily practice question

## Problem Statement

TR: Cift sayida node iceren linked list'te, `i` indeksindeki node'un twin'i
`n - 1 - i` indeksindeki node'dur. Her twin ciftinin degerlerini topla ve en
buyuk twin sum degerini dondur.

EN: In an even-length linked list, the twin of the node at index `i` is the
node at index `n - 1 - i`. Return the largest sum among all twin-node pairs.

## Starter Code (C)

```c
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {

}
```

## Parameters / Return

- `head`: First node of an even-length singly linked list.
- Returns the maximum sum of two twin nodes.

## Examples

```text
Input: head = [5,4,2,1]
Output: 6
Explanation:
Twin pairs are (5,1) and (4,2), and both sums are 6.
```

```text
Input: head = [4,2,2,3]
Output: 7
Explanation: The first and last nodes form the maximum pair: 4 + 3 = 7.
```

```text
Input: head = [1,100000]
Output: 100001
```

## Constraints

- The number of nodes is even
- `2 <= number of nodes <= 10^5`
- `1 <= node->val <= 10^5`

## Approach

### 1. Find the second half

Move `slow` one node and `fast` two nodes at a time. When `fast` reaches the
end, `slow` points to the first node of the second half.

### 2. Reverse the second half

Reverse the list starting at `slow`. The last node of the original list then
becomes the first node of the reversed half.

```text
Original:        5 -> 4 -> 2 -> 1
First half:      5 -> 4
Reversed second: 1 -> 2
```

### 3. Compare twin nodes together

Walk from `head` and from the reversed second half at the same time:

```text
5 + 1
4 + 2
```

Track the largest sum encountered.

The implementation modifies the links in the second half and does not restore
the original list, which is acceptable for this LeetCode function.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
