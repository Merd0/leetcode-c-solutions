# #0706 - Design HashMap

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Hash Table, Design
- Hint: Use one array for values and another array to track whether a key exists.
- Solved date: 2026-06-05
- Source: https://leetcode.com/problems/design-hashmap/

## Problem Statement

TR: Built-in hash table kullanmadan bir HashMap tasarla. `put`, `get` ve
`remove` islemlerini destekle.

EN: Design a HashMap without using a built-in hash table library. Support put,
get, and remove operations.

## Starter Code (C)

```c
typedef struct {

} MyHashMap;

MyHashMap* myHashMapCreate() {

}

void myHashMapPut(MyHashMap* obj, int key, int value) {

}

int myHashMapGet(MyHashMap* obj, int key) {

}

void myHashMapRemove(MyHashMap* obj, int key) {

}

void myHashMapFree(MyHashMap* obj) {

}
```

## Parameters / Return

- `key`: Direct-addressed key.
- `value`: Value stored for the key.
- `get`: Returns stored value, or `-1` if the key does not exist.

## Examples

```text
Input:
["MyHashMap","put","put","get","get","put","get","remove","get"]
[[],[1,1],[2,2],[1],[3],[2,1],[2],[2],[2]]

Output:
[null,null,null,1,-1,null,1,null,-1]
```

## Constraints

- `0 <= key, value <= 10^6`
- At most `10^4` calls will be made to the operations.

## Approach

Use two arrays:

- `value[key]`: stores the current mapped value.
- `exist[key]`: says whether the key is currently active.

The `exist` array matters because a stored value can be `0`, so `value[key] == 0`
cannot be used as an absent marker.

## Solution

- [solution.c](solution.c)
