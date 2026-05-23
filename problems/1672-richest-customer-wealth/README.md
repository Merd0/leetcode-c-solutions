# #1672 - Richest Customer Wealth

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Matrix
- Companies: Not tracked in this repo
- Hint: Each row belongs to one customer; sum each row and keep the maximum.
- Solved: 2026-05-19
- LeetCode: https://leetcode.com/problems/richest-customer-wealth/

## Problem Statement

TR: `accounts[i][j]`, `i` musterinin `j` bankasindaki parasini temsil eder. En zengin musterinin toplam parasini dondur.

EN: `accounts[i][j]` is the money customer `i` has in bank `j`. Return the highest total wealth among all customers.

## Starter Code (C)

```c
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {

}
```

## Parameters

- `accounts`: Matrix of customer bank balances.
- `accountsSize`: Number of customers.
- `accountsColSize`: Number of bank accounts in each row.

## Return

TR: En yuksek musteri toplam serveti.

EN: Return the maximum row sum.

## Examples

### Example 1

```text
Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
Both customers have total wealth 6.
```

### Example 2

```text
Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10
```

### Example 3

```text
Input: accounts = [[2,8,7],[7,1,3],[1,9,5]]
Output: 17
```

## Constraints

- `1 <= accounts.length <= 50`
- `1 <= accounts[i].length <= 50`
- `1 <= accounts[i][j] <= 100`

## Approach

TR: Her satirin toplamini hesapla. Satir toplami mevcut maksimumdan buyukse maksimumu guncelle.

EN: Compute the sum of each row. If a row sum is greater than the current maximum, update the maximum.

## Solution

- [solution.c](solution.c)
