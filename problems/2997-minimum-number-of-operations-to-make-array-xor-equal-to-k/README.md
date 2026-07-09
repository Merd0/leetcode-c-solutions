# #2997 - Minimum Number of Operations to Make Array XOR Equal to K

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Bit Manipulation, XOR, Set Bit Count
- Hint: Compare the final array XOR with `k`, not each element with `k`.
- Solved date: 2026-07-09
- Source: https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/

## Problem Statement

TR: `nums` dizisindeki herhangi bir sayinin herhangi bir bitini bir islemde
ters cevirebilirsin. Tum dizinin XOR sonucu `k` olacak sekilde minimum kac
bit flip gerekir?

EN: In one operation, you may flip any bit of any number in `nums`. Return the
minimum number of bit flips needed so that the XOR of all numbers becomes `k`.

## Starter Code (C)

```c
int minOperations(int* nums, int numsSize, int k) {

}
```

## Parameters / Return

- `nums`: Input numbers.
- `numsSize`: Number of input values.
- `k`: Target XOR value.
- Returns the minimum number of bit flips needed.

## Examples

```text
Input:  nums = [2,1,3,4], k = 1
Output: 2
```

`2 ^ 1 ^ 3 ^ 4 = 4`. Binary view:

```text
xorAll = 0100
k      = 0001
diff   = 0101
```

`diff` has two set bits, so two bit flips are needed.

```text
Input:  nums = [2,0,2,0], k = 0
Output: 0
```

The array XOR is already `0`.

## Constraints

- `1 <= nums.length <= 10^5`
- `0 <= nums[i] <= 10^6`
- `0 <= k <= 10^6`

## Core Idea

The operation flips one bit in one array element. For the final XOR result, a
flip at bit position `b` changes only bit `b` of the total XOR.

So we do not compare every `nums[i]` with `k`. We first compute the XOR of the
whole array:

```c
int xorNums = 0;

for (int i = 0; i < numsSize; i++) {
    xorNums ^= nums[i];
}
```

Then compare that final XOR with `k`:

```c
int diff = xorNums ^ k;
```

`diff` has `1` exactly where `xorNums` and `k` are different. Therefore the
answer is the number of set bits in `diff`.

## Approach 1: Shift And Count Bits

This is the direct version:

```c
while (diff != 0) {
    if ((diff & 1) == 1) {
        count++;
    }

    diff >>= 1;
}
```

Read the least significant bit, count it if it is `1`, then shift right to
inspect the next bit.

This version is kept as [`solution_shift_count.c`](solution_shift_count.c)
because it is easy to understand when learning bit operations.

## Approach 2: Clear The Lowest Set Bit

The optimized bit trick is:

```c
diff &= (diff - 1);
```

This clears the rightmost `1` bit of `diff`.

Example:

```text
diff      = 1100
diff - 1  = 1011

  1100
& 1011
= 1000
```

Only the rightmost set bit disappeared. The left set bit stayed.

Another example:

```text
diff      = 1011000
diff - 1  = 1010111

  1011000
& 1010111
= 1010000
```

Again, exactly one set bit is removed.

So this loop runs once per `1` bit:

```c
while (diff != 0) {
    diff &= (diff - 1);
    count++;
}
```

Embedded-C connection: this is the same mindset as checking and clearing flag
bits in a status value. You isolate which bit positions differ, then handle
only those active bits.

## Complexity

Shift count:

- Time: `O(log M)`, where `M = xorNums ^ k`
- Space: `O(1)`

Clear lowest set bit:

- Time: `O(number of set bits in diff)`
- Space: `O(1)`

Both approaches first scan the array once, so the total time is `O(n + bit work)`.

## Solution

- [solution.c](solution.c)
- [solution_shift_count.c](solution_shift_count.c)
