# #0136 - Single Number

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Bit Manipulation
- Companies: Not tracked in this repo
- Hint: XOR cancels equal numbers.
- Solved: 2026-05-19
- LeetCode: https://leetcode.com/problems/single-number/

## Problem Statement

TR: Bir dizide bir sayi bir kez, diger tum sayilar ikiser kez geciyor. Sadece bir kez gecen sayiyi bul.

EN: In an array, one number appears once and every other number appears exactly twice. Find the number that appears once.

## Starter Code (C)

```c
int singleNumber(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Sadece bir kez gecen sayi.

EN: Return the value that appears only once.

## Examples

### Example 1

```text
Input: nums = [2,2,1]
Output: 1
```

### Example 2

```text
Input: nums = [4,1,2,1,2]
Output: 4
```

### Example 3

```text
Input: nums = [1]
Output: 1
```

## Constraints

- `1 <= nums.length <= 3 * 10^4`
- `-3 * 10^4 <= nums[i] <= 3 * 10^4`
- Every element appears twice except for one.

## Approach

TR: XOR islemi kullanilir. `x ^ x = 0`, `x ^ 0 = x` oldugu icin cift gelen sayilar birbirini sifirlar ve tek kalan sayi sonuc olur.

EN: Use XOR. Since `x ^ x = 0` and `x ^ 0 = x`, paired values cancel each other and the unpaired value remains.

## Solution

- [solution.c](solution.c)
