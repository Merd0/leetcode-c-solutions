# #0900 - RLE Iterator

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Design, Array, Iterator, Stateful API
- Hint: Keep the current run index. Do not expand the whole sequence.
- Solved date: 2026-07-06
- Source: https://leetcode.com/problems/rle-iterator/

## Problem Statement

TR: Run-length encoded bir veri akisina iterator yaz. `next(n)` cagrisi,
acilmis dizinin basindan siradaki `n` elemani tuketir ve tuketilen son elemanin
degerini dondurur.

EN: Design an iterator over a run-length encoded sequence. Each `next(n)` call
consumes the next `n` values from the expanded sequence and returns the last
consumed value.

## Starter Code (C)

```c
typedef struct {

} RLEIterator;

RLEIterator* rLEIteratorCreate(int* encoding, int encodingSize) {

}

int rLEIteratorNext(RLEIterator* obj, int n) {

}

void rLEIteratorFree(RLEIterator* obj) {

}
```

## Parameters / Return

- `encoding`: Pairs of `[count, value]`.
- `encodingSize`: Length of the compressed array.
- `n`: How many values to consume from the front of the expanded stream.
- `next`: Returns the last consumed value, or `-1` if not enough values remain.

## Example

```text
Input:
["RLEIterator", "next", "next", "next", "next"]
[[[3,8,0,9,2,5]], [2], [1], [1], [2]]

Output:
[null, 8, 8, 5, -1]
```

Expanded mental model:

```text
[3,8,0,9,2,5] -> [8,8,8,5,5]
```

## Constraints

- `2 <= encoding.length <= 1000`
- `encoding.length` is even
- `0 <= encoding[i] <= 10^9`
- `1 <= n <= 10^9`
- At most `1000` calls are made to `next`

## Approach

Store the compressed array and an `index` inside the struct:

```c
typedef struct {
    int* encoding;
    int encodingSize;
    int index;
} RLEIterator;
```

`index` always points to the current `count` position. The matching value is at
`index + 1`.

For each `next(n)` call:

1. Skip empty runs where `count == 0`.
2. If current `count >= n`, consume `n` values from this run and return `value`.
3. Otherwise consume the whole run, subtract it from `n`, and move to the next
   `[count, value]` pair.
4. If the compressed data ends before `n` is fully consumed, return `-1`.

Embedded-C connection: this is the same idea as reading from a compressed sensor
stream or packet stream without expanding everything into RAM. The struct keeps
the current position and every call continues from the previous state.

## Complexity

- Constructor: `O(1)`
- `next`: `O(number of skipped runs)` amortized
- Space: `O(1)` extra

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
