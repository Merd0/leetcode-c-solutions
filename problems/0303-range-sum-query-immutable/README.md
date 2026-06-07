# #0303 - Range Sum Query - Immutable

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Design, Prefix Sum
- Hint: Precompute cumulative sums once, then answer each query with subtraction.
- Solved date: 2026-06-07
- Source: https://leetcode.com/problems/range-sum-query-immutable/

## Problem Statement

TR: Degismeyen bir integer array icin cok sayida `[left, right]` aralik toplami
sorgusunu hizli cevaplayan bir `NumArray` yapisi tasarla.

EN: Design a `NumArray` object that answers many inclusive range-sum queries on
an immutable integer array.

## Starter Code (C)

```c
typedef struct {

} NumArray;

NumArray* numArrayCreate(int* nums, int numsSize) {

}

int numArraySumRange(NumArray* obj, int left, int right) {

}

void numArrayFree(NumArray* obj) {

}
```

## Parameters / Return

- `nums`: Source array used during construction.
- `left`, `right`: Inclusive query boundaries.
- `sumRange`: Returns the sum from `left` through `right`.

## Example

```text
Input:
["NumArray","sumRange","sumRange","sumRange"]
[[[-2,0,3,-5,2,-1]],[0,2],[2,5],[0,5]]

Output:
[null,1,-1,-3]
```

## Constraints

- `1 <= nums.length <= 10^4`
- `-10^5 <= nums[i] <= 10^5`
- `0 <= left <= right < nums.length`
- At most `10^4` calls are made to `sumRange`

## Approach

The object owns a prefix-sum array with one extra leading element:

```text
prefix[0] = 0
prefix[i + 1] = prefix[i] + nums[i]
```

Any inclusive range sum becomes:

```text
prefix[right + 1] - prefix[left]
```

Construction does the work once, and every later query is constant time. The
custom free function releases both the prefix buffer and its owning struct.

## Complexity

- Construction: `O(n)`
- Time per query: `O(1)`
- Space: `O(n)`

## Solution

- [solution.c](solution.c)
