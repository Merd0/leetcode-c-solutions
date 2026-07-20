# #0287 - Find the Duplicate Number

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Hash Table, Two Pointers, Binary Search
- Hint: First solve with a frequency table, then learn why the values can be treated like linked-list pointers.
- Solved date: 2026-06-27
- Source: https://leetcode.com/problems/find-the-duplicate-number/
- Note: Medium practice question

## Problem Statement

TR: `nums` dizisinde `n + 1` eleman vardir ve her eleman `1` ile `n`
arasindadir. Bu yuzden en az bir sayi tekrar etmek zorundadir. Tekrar eden
sayiyi bul.

EN: The array has `n + 1` integers, and every value is between `1` and `n`.
Because of that, at least one value must be repeated. Return the repeated value.

## Starter Code (C)

```c
int findDuplicate(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`; this is `n + 1`.
- Returns: The duplicated number.

## Examples

```text
Input:  nums = [1,3,4,2,2]
Output: 2

The value 2 appears more than once.
```

```text
Input:  nums = [3,1,3,4,2]
Output: 3
```

```text
Input:  nums = [3,3,3,3,3]
Output: 3
```

## Constraints

- `1 <= n <= 100000`
- `nums.length == n + 1`
- `1 <= nums[i] <= n`
- Only one distinct number is repeated, but it may appear more than twice.

## Approach 1 - Frequency Table

This is the direct solution that comes to mind first.

Create a `count` array. For every value in `nums`, increase its counter. The
first value whose counter becomes greater than `1` is the duplicate.

```text
nums = [1,3,4,2,2]

read 1 -> count[1] = 1
read 3 -> count[3] = 1
read 4 -> count[4] = 1
read 2 -> count[2] = 1
read 2 -> count[2] = 2  => duplicate is 2
```

This is easy to understand and good for learning frequency arrays. Its tradeoff
is extra memory.

Complexity:

- Time: `O(n)`
- Extra space: `O(n)`

## Approach 2 - Floyd Cycle Detection

Floyd is the advanced solution. It solves the problem without changing the
array and without a `count` array.

The key idea:

```text
Treat nums[i] as the next index.
```

Example:

```text
nums:  [1,3,4,2,2]
index:  0 1 2 3 4
```

Use this rule:

```text
next index = nums[current index]
```

So the path becomes:

```text
0 -> nums[0] = 1
1 -> nums[1] = 3
3 -> nums[3] = 2
2 -> nums[2] = 4
4 -> nums[4] = 2
```

Written as arrows:

```text
0 -> 1 -> 3 -> 2 -> 4
               ^    |
               |____|
```

There is a cycle: `2 -> 4 -> 2`.

Why does a duplicate create this?

Two different positions point to the same value:

```text
3 -> 2
4 -> 2
```

That shared entry makes the array behave like a linked list with a cycle. The
start of that cycle is the duplicate value.

### Step 1 - Find a Meeting Point

Move two walkers:

- `slow` moves one step: `slow = nums[slow]`
- `fast` moves two steps: `fast = nums[nums[fast]]`

If there is a cycle, the fast walker eventually catches the slow walker inside
the cycle.

```c
do {
    slow = nums[slow];
    fast = nums[nums[fast]];
} while (slow != fast);
```

At this point, `slow` and `fast` met somewhere inside the cycle. This is not
necessarily the duplicate yet.

### Step 2 - Find the Cycle Entry

Put `slow` back at the beginning and move both one step at a time:

```c
slow = nums[0];

while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
}
```

Where they meet now is the cycle entry. In this problem, the cycle entry is the
duplicate number.

Complexity:

- Time: `O(n)`
- Extra space: `O(1)`
- The input array is not modified.

## Which One Should I Remember?

- Frequency table: easier first solution, good for understanding counting.
- Floyd: interview-level solution, important because it turns an array problem
  into a linked-list cycle problem.

If Floyd feels strange, remember this sentence:

```text
nums[i] is not only a value; in this solution it is also the next index.
```

## Solutions

- [solution.c](solution.c) - frequency table solution
- [solution_floyd.c](solution_floyd.c) - Floyd cycle detection solution

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
