# #0739 - Daily Temperatures

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Stack, Monotonic Stack
- Companies: Not tracked in this repo
- Hint: Store indices of days still waiting for a warmer temperature.
- Solved: 2026-05-23
- LeetCode: https://leetcode.com/problems/daily-temperatures/

## Problem Statement

TR: Gunluk sicakliklar verilir. Her gun icin daha sicak bir gun gelene kadar kac gun beklemek gerektigini dondur. Daha sicak gun yoksa `0` yaz.

EN: Given daily temperatures, return how many days each day must wait until a warmer day. If there is no warmer future day, write `0`.

## Starter Code (C)

```c
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {

}
```

## Parameters

- `temperatures`: Daily temperatures.
- `temperaturesSize`: Number of days.
- `returnSize`: Output array size written by the function.

## Return

TR: Her gun icin bekleme suresini tutan dizi.

EN: Return an array containing the wait time for each day.

## Examples

### Example 1

```text
Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]
```

### Example 2

```text
Input: temperatures = [30,40,50,60]
Output: [1,1,1,0]
```

### Example 3

```text
Input: temperatures = [30,60,90]
Output: [1,1,0]
```

## Constraints

- `1 <= temperatures.length <= 10^5`
- `30 <= temperatures[i] <= 100`

## Approach

TR: Stack icinde henuz daha sicak gununu bulamamis gunlerin indexlerini tut. Bugun daha sicaksa stack'in ustundeki eski gunlerin cevaplarini bugunle hesapla.

EN: Store indices of days that have not found a warmer future day. When today is warmer than the day on top of the stack, resolve that old day using today's index.

## Solution

- [solution.c](solution.c)
