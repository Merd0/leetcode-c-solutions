# #0621 - Task Scheduler

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Hash Table, Greedy, Sorting, Counting
- Hint: The most frequent task decides the minimum cooldown skeleton.
- Solved date: 2026-07-13
- Source: https://leetcode.com/problems/task-scheduler/
- Note: Medium practice question with an embedded-style scheduler connection

## Problem Statement

TR: CPU'ya verilecek task karakterleri ve `n` cooldown degeri veriliyor. Ayni
task iki kez calisacaksa aralarinda en az `n` zaman birimi olmalidir. Gerekirse
CPU idle kalabilir. Tum tasklari bitirmek icin gereken minimum sureyi dondur.

EN: Given CPU tasks and a cooldown `n`, the same task type must be separated by
at least `n` intervals. Return the minimum number of intervals required to finish
all tasks.

## Starter Code (C)

```c
int leastInterval(char* tasks, int tasksSize, int n) {

}
```

## Parameters / Return

- `tasks`: Uppercase task labels from `A` to `Z`.
- `tasksSize`: Number of tasks.
- `n`: Required cooldown between two equal tasks.
- Returns the minimum total time including idle slots.

## Examples

```text
Input: tasks = ["A","A","A","B","B","B"], n = 2
Output: 8
```

One valid schedule:

```text
A B idle A B idle A B
```

```text
Input: tasks = ["A","C","A","B","D","B"], n = 1
Output: 6
```

The other tasks can fill all cooldown gaps, so no idle time is needed.

## Constraints

- `1 <= tasks.length <= 10^4`
- `tasks[i]` is an uppercase English letter.
- `0 <= n <= 100`

## Approach

Count the 26 possible task labels first:

```text
freq['A'..'Z']
```

The task with the highest frequency creates the required schedule skeleton. For
example, if `A` appears 3 times and `n = 2`:

```text
A _ _ A _ _ A
```

There are only `maxFreq - 1` cooldown blocks because the last `A` does not need
anything after it. Each block has length `n + 1`:

```text
A _ _
```

If more than one task has the same highest frequency, all of them occupy the
last group. For `A A A B B B`:

```text
A B _ A B _ A B
```

So:

```text
skeleton = (maxFreq - 1) * (n + 1) + maxCount
```

The final answer is the larger of:

```text
tasksSize
skeleton
```

because extra task types can fill idle gaps, but the schedule can never be
shorter than the number of actual tasks.

Embedded-C connection: this is a small CPU scheduling model. The frequency table
acts like a compact task counter, and the formula estimates the minimum timeline
created by the busiest task class.

## Complexity

- Time: `O(tasksSize + 26)`
- Space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
