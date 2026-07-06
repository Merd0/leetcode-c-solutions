# #1656 - Design an Ordered Stream

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Design, Array, Stream, Stateful API
- Hint: Buffer out-of-order values and keep the next expected id.
- Solved date: 2026-07-06
- Source: https://leetcode.com/problems/design-an-ordered-stream/

## Problem Statement

TR: `idKey, value` ciftleri siradan bagimsiz gelebilir. Gelen veriyi yerine
koy, sonra beklenen siradaki id hazirsa arka arkaya hazir olan chunk'lari
dondur.

EN: Design an ordered stream that stores incoming `idKey, value` pairs and
returns the longest ready chunk starting from the current pointer.

## Starter Code (C)

```c
typedef struct {

} OrderedStream;

OrderedStream* orderedStreamCreate(int n) {

}

char** orderedStreamInsert(OrderedStream* obj, int idKey, char* value, int* retSize) {

}

void orderedStreamFree(OrderedStream* obj) {

}
```

## Parameters / Return

- `n`: Number of values in the stream.
- `idKey`: Position of the inserted value. It starts from `1`.
- `value`: String stored at `idKey`.
- `retSize`: Output parameter that tells LeetCode how many strings are returned.
- `insert`: Returns the ready chunk, or an empty chunk if the next expected id
  is still missing.

## Example

```text
Input:
["OrderedStream","insert","insert","insert","insert","insert"]
[[5],[3,"ccccc"],[1,"aaaaa"],[2,"bbbbb"],[5,"eeeee"],[4,"ddddd"]]

Output:
[null,[],["aaaaa"],["bbbbb","ccccc"],[],["ddddd","eeeee"]]
```

## Constraints

- `1 <= n <= 1000`
- `1 <= idKey <= n`
- `value.length == 5`
- All `idKey` values are unique
- Exactly `n` calls are made to `insert`

## Approach

Use the struct as a small stream state:

```c
typedef struct {
    char** stream;
    int size;
    int ptr;
} OrderedStream;
```

Mental model:

```text
stream[idKey] -> stored value
ptr           -> next id that must be delivered
size          -> upper bound
```

`insert` always stores the incoming value first. If the inserted `idKey` is not
the current `ptr`, the stream cannot deliver anything yet.

If `idKey == ptr`, move `ptr` forward while consecutive values are ready. The
number of moved positions becomes `retSize`.

Important C detail: LeetCode's C interface expects the returned array to be
owned by the caller, so the solution allocates a small `result` array and copies
the ready string pointers into it. The strings themselves are not copied.

Embedded-C connection: this looks like packet sequencing. Packet #3 can arrive
before packet #1, but the application should only consume data when the missing
earlier packets are also ready.

## Complexity

- Constructor: `O(n)`
- `insert`: `O(k)` where `k` is the returned chunk size
- Space: `O(n)`

## Solution

- [solution.c](solution.c)
