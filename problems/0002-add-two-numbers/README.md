# #0002 - Add Two Numbers

- Difficulty: Medium
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/add-two-numbers/
- Topics: Linked List, Math, Carry

## Problem

TR: Iki sayi ters sirada linked list olarak verilir. Basamaklari toplayip sonucu yine ters sirada linked list olarak dondur.

EN: Two numbers are stored in reverse order as linked lists. Add them digit by digit and return the sum as a linked list.

## Starter Code (C)

```c
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

}
```

## Parameters

- `l1`: First number, stored from least significant digit to most significant digit.
- `l2`: Second number, stored in the same reverse order.

## Return

TR: Toplam sayiyi temsil eden yeni linked list'in basini dondur.

EN: Return the head of a new linked list representing the sum.

## Example

```text
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Reason: 342 + 465 = 807
```

## Approach

TR: Iki listeyi birlikte gez. Her adimda `sum = digit1 + digit2 + carry`, yeni basamak `sum % 10`, yeni carry `sum / 10`.

EN: Traverse both lists together. At each step, compute digit sum plus carry, append `sum % 10`, and update carry with `sum / 10`.

## Solution

- [solution.c](solution.c)
