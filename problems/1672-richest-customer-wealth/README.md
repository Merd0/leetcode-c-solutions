# #1672 - Richest Customer Wealth

- Difficulty: Easy
- Solved: 2026-05-19
- LeetCode: https://leetcode.com/problems/richest-customer-wealth/
- Topics: Matrix, Row Sum

## Problem

TR: Her satir bir musteriyi, her sutun o musterinin bir bankadaki parasini temsil eder. En zengin musterinin toplam servetini bul.

EN: Each row is a customer and each column is money in one bank. Return the largest total wealth.

## Starter Code (C)

```c
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {

}
```

## Parameters

- `accounts`: Matrix of customer accounts.
- `accountsSize`: Number of customers.
- `accountsColSize`: Number of accounts per customer row.

## Return

TR: En buyuk satir toplami.

EN: The maximum row sum.

## Example

```text
Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
```

## Approach

TR: Her satiri topla ve en buyuk toplami sakla.

EN: Sum each row and keep the largest total.

## Solution

- [solution.c](solution.c)
