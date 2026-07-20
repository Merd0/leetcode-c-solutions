# #1700 - Number of Students Unable to Eat Lunch

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Queue, Simulation, Counting
- Hint: The order of students stops mattering once only their remaining preferences are counted.
- Solved date: 2026-06-10
- Source: https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/

## Problem Statement

TR: Ogrenciler `0` veya `1` tipindeki sandviclerden birini tercih eder.
Sandvicler verilen sirayla dagitilir. Siradaki sandvici isteyen en az bir
ogrenci varsa siradaki hareketler sonunda o sandvic alinabilir. Ustteki
sandvici isteyen hic ogrenci kalmadiginda yemek yiyemeyen ogrenci sayisini
dondur.

EN: Each student prefers sandwich type `0` or `1`, and sandwiches are served in
the given order. Return how many students remain when nobody in the queue wants
the next sandwich.

## Starter Code (C)

```c
int countStudents(int* students, int studentsSize,
                  int* sandwiches, int sandwichesSize) {

}
```

## Parameters / Return

- `students`: Initial sandwich preference of each student.
- `studentsSize`: Number of students.
- `sandwiches`: Sandwich types from top to bottom.
- `sandwichesSize`: Number of sandwiches.
- Returns the number of students who cannot eat.

## Examples

```text
Input: students = [1,1,0,0], sandwiches = [0,1,0,1]
Output: 0
Explanation: Every sandwich type still has a student who wants it, so all
students eventually eat.
```

```text
Input: students = [1,1,1,0,0,1], sandwiches = [1,0,0,0,1,1]
Output: 3
Explanation: When the next sandwich is type 0, no type-0 student remains.
The three remaining students cannot eat.
```

## Constraints

- `1 <= students.length, sandwiches.length <= 100`
- `students.length == sandwiches.length`
- Every value in both arrays is either `0` or `1`

## Approach

Count how many students prefer type `0` and type `1`.

Read sandwiches from top to bottom:

- If at least one student wants the current type, decrease that preference
  count.
- If its count is already zero, nobody can take the current sandwich and the
  process must stop.

There is no need to simulate students moving around the queue. Their order can
change, but the number of students wanting each type does not.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
