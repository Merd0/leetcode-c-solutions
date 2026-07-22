# 05 - Hash Tables

[Previous](04-counting-and-frequency-tables.md) | [Contents](README.md) | [Turkce](../tr/05-hash-tables.md) | [Next](06-two-pointers.md)

## Mental Model

A hash table answers "have I seen this key?" or "what summary belongs to this key?"
over a large key space. A hash function maps keys to buckets, and the implementation
must handle collisions between different keys.

The purpose resembles a counting array; the key space differs. Small integer domains
favor arrays, while sparse integers and strings often favor hashing.

## State And Invariant

During a scan, the table summarizes the processed prefix. In Two Sum, the table
contains only past elements before the current value is tested.

```c
for (int i = 0; i < n; i++) {
    int need = target - a[i];
    if (map_contains(need)) return i;
    map_put(a[i], i);
}
```

Querying before insertion prevents one element from being used twice.

## Collisions And Expected Cost

Chaining or open addressing resolves collisions. With a good distribution and load
factor, lookup and insertion are expected O(1); the worst case can still be O(n).

## When Not To Use It

Hashing does not directly provide sorted traversal, minimum keys, or range queries.
It is also unnecessary overhead for a small fixed domain.

## C Risks

C has no general-purpose standard hash map. Key lifetime, resizing, tombstones,
collision handling, and destruction are part of the implementation contract.

## Practice In This Repository

[1 - Two Sum](../../../problems/0001-two-sum/README.md), [49 - Group Anagrams](../../../problems/0049-group-anagrams/README.md), [560 - Subarray Sum Equals K](../../../problems/0560-subarray-sum-equals-k/README.md), and [706 - Design HashMap](../../../problems/0706-design-hashmap/README.md).

## Systems Bridge

Dynamic memory and average-time guarantees may be unsuitable for hard real-time
code. Fixed-capacity hashing needs explicit load and worst-probe limits.

