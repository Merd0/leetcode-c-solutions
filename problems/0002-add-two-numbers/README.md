# #0002 - Add Two Numbers

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Linked List, Math, Recursion
- Companies: Not tracked in this repo
- Hint: Add digits from left to right in the linked lists because the lists already store numbers in reverse order.
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/add-two-numbers/

## Problem Statement

TR: Iki sayi linked list olarak verilir ve basamaklar ters sirada tutulur. Her node bir basamaktir. Iki sayiyi topla ve sonucu yine ters sirada yeni linked list olarak dondur.

EN: Two numbers are stored in linked lists in reverse digit order. Each node stores one digit. Add the two numbers and return the sum as a new linked list in the same reverse order.

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
- `l2`: Second number, stored from least significant digit to most significant digit.

## Return

TR: Toplam sayiyi temsil eden yeni linked list'in bas node'u.

EN: Return the head of a new linked list representing the sum.

## Examples

### Example 1

```text
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation:
342 + 465 = 807.
```

### Example 2

```text
Input: l1 = [0], l2 = [0]
Output: [0]
```

### Example 3

```text
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
```

## Constraints

- Each list has at least `1` node and at most `100` nodes.
- `0 <= Node.val <= 9`
- The numbers do not contain leading zeroes except the number `0`.

## Approach

TR: Dummy head kullanarak yeni listeyi kur. `l1`, `l2` ve `carry` bitene kadar dongu devam eder. Her adimda `sum = digit1 + digit2 + carry`, yeni node degeri `sum % 10`, sonraki carry `sum / 10` olur.

EN: Use a dummy head to build the result list. Continue while `l1`, `l2`, or `carry` exists. At each step, compute `sum = digit1 + digit2 + carry`; the new node value is `sum % 10`, and the next carry is `sum / 10`.

## Solution

- [solution.c](solution.c)
