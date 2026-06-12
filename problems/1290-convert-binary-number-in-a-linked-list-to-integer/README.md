# #1290 - Convert Binary Number in a Linked List to Integer

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Linked List, Math
- Hint: Process the bits from left to right and append each bit to the current value.
- Solved date: 2026-06-12
- Source: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
- Note: Daily practice question

## Problem Statement

TR: Linked list icindeki her node `0` veya `1` degerini tutar. Node'lar bir
binary sayiyi en anlamli bitten en az anlamli bite dogru temsil eder. Bu binary
sayinin decimal karsiligini dondur.

EN: Each linked-list node stores a binary digit, and the list represents a
binary number from the most significant bit to the least significant bit.
Return its decimal value.

## Starter Code (C)

```c
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {

}
```

## Parameters / Return

- `head`: First node of the binary linked list.
- Each node value is either `0` or `1`.
- Returns the decimal value represented by the complete list.

## Examples

```text
Input: head = [1,0,1]
Output: 5
Explanation: Binary 101 equals decimal 5.
```

```text
Input: head = [0]
Output: 0
```

## Constraints

- The list is not empty
- The number of nodes is at most `30`
- Every node value is `0` or `1`
- The list has no leading zero unless the represented number is zero

## Approach

Start with `result = 0`. For every node, shift the existing binary value one
position to the left and append the current bit.

The submitted code expresses that operation arithmetically:

```text
result = result * 2 + current_bit
```

For `[1,0,1]`:

```text
0 * 2 + 1 = 1
1 * 2 + 0 = 2
2 * 2 + 1 = 5
```

The equivalent bitwise expression is:

```c
result = (result << 1) | head->val;
```

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
