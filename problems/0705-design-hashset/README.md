# #0705 - Design HashSet

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Hash Table, Design
- Hint: The key range is small enough for a direct-address table.
- Solved date: 2026-06-05
- Source: https://leetcode.com/problems/design-hashset/

## Problem Statement

TR: Built-in hash table kullanmadan bir HashSet tasarla. `add`, `remove` ve
`contains` islemlerini destekle.

EN: Design a HashSet without using a built-in hash table library. Support add,
remove, and contains operations.

## Starter Code (C)

```c
typedef struct {

} MyHashSet;

MyHashSet* myHashSetCreate(void) {

}

void myHashSetAdd(MyHashSet* obj, int key) {

}

void myHashSetRemove(MyHashSet* obj, int key) {

}

bool myHashSetContains(MyHashSet* obj, int key) {

}

void myHashSetFree(MyHashSet* obj) {

}
```

## Parameters / Return

- `key`: Value to add, remove, or query.
- `contains`: Returns whether the key exists in the set.

## Examples

```text
Input:
["MyHashSet","add","add","contains","contains","add","contains","remove","contains"]
[[],[1],[2],[1],[3],[2],[2],[2],[2]]

Output:
[null,null,null,true,false,null,true,null,false]
```

## Constraints

- `0 <= key <= 10^6`
- At most `10^4` calls will be made to the operations.

## Approach

Because the allowed key range is known and limited, use direct addressing:

```text
exist[key] == 1  -> key is present
exist[key] == 0  -> key is absent
```

This trades memory for very simple `O(1)` operations.

## Solution

- [solution.c](solution.c)
