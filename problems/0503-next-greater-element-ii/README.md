# #0503 - Next Greater Element II

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Stack, Monotonic Stack
- Hint: Store unresolved indexes, not values.
- Solved date: 2026-07-15
- Source: https://leetcode.com/problems/next-greater-element-ii/
- Note: Medium practice question with brute-force and monotonic-stack versions

## Problem Statement

TR: Circular bir array veriliyor. Her eleman icin sag tarafinda, circular olarak
devam ederek, kendisinden buyuk ilk elemani bul. Boyle bir eleman yoksa `-1`
yaz.

EN: Given a circular integer array, return the next greater value for every
element. If no greater value exists, return `-1` for that position.

## Starter Code (C)

```c
int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters / Return

- `nums`: Circular input array.
- `numsSize`: Number of elements.
- `returnSize`: Must be set to `numsSize`.
- Returns a malloced answer array. The caller frees it.

## Examples

```text
Input: nums = [1,2,1]
Output: [2,-1,2]
```

The last `1` wraps around and sees `2`.

```text
Input: nums = [1,2,3,4,3]
Output: [2,3,4,-1,4]
```

## Constraints

- `1 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`

## Brute-Force Approach

The first idea is direct and useful:

```text
For every index i:
    start from i + 1
    move circularly until coming back to i
    the first nums[curr] > nums[i] is the answer
```

This uses:

```text
curr = (curr + 1) % numsSize
```

to wrap around the circular array.

This version is easy to reason about, but each element may scan almost the whole
array:

```text
Time: O(n^2)
Space: O(1) extra, not counting the answer array
```

## Monotonic Stack Approach

The stronger thought is to reverse the question.

Brute force asks:

```text
For this index, where is my next greater value?
```

The stack solution asks:

```text
This new value arrived. Which unresolved previous indexes can it solve?
```

The stack stores indexes whose answer is not known yet. When the current value
is greater than the value at the stack top, it becomes that index's answer:

```text
nums[idx] > nums[stack[top]]
```

Because the array is circular, scan two passes:

```text
for i = 0 to 2 * numsSize - 1
    idx = i % numsSize
```

Push indexes only during the first pass. The second pass exists only to resolve
items that need circular wraparound.

Embedded-C connection: this is close to a ring-buffer stream. Some positions are
waiting for a future event. A new sample can complete one or more pending
events, so the algorithm keeps only unresolved indexes as runtime state.

## Complexity

- Brute force time: `O(n^2)`
- Monotonic stack time: `O(n)`
- Space: `O(n)`

## Solution

- [solution_bruteforce.c](solution_bruteforce.c)
- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
