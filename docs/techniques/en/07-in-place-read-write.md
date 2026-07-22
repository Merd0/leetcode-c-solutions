# 07 - In-Place Read/Write Compaction

[Previous](06-two-pointers.md) | [Contents](README.md) | [Turkce](../tr/07-in-place-read-write.md) | [Next](08-fixed-sliding-window.md)

## Mental Model

`read` identifies input being classified; `write` identifies where the next valid
output belongs. The same buffer acts as source and destination. Deletion does not
require shifting the entire suffix; it changes which prefix is considered valid.

This model explains operations such as `write -= k`. Stale helper values outside
the valid prefix do not matter and will be overwritten before reuse.

## Invariant

At each iteration, `a[0..write)` is the complete valid output for all consumed input.

```c
int write = 0;
for (int read = 0; read < n; read++) {
    if (keep(a[read])) {
        a[write] = a[read];
        write++;
    }
}
```

The output length is `write`; a string additionally needs `s[write] = '\0'`.

## Rollback As A Stack

The write pointer can behave like a stack top. Reducing it invalidates the last
output group. Only `[0, write)` belongs to the logical state, so discarded counters
need not be cleared if they are assigned before being read again.

## When Not To Use It

Use a separate destination if the input must remain unchanged, output can grow, or
forward writes could overwrite unread data.

## Cost And C Risks

Time is O(n); extra space is often O(1), or O(n) for per-position group counts.
Prevent negative `write`, terminate strings, and confirm that mutation is allowed.

## Practice In This Repository

[26 - Remove Duplicates](../../../problems/0026-remove-duplicates-from-sorted-array/README.md), [27 - Remove Element](../../../problems/0027-remove-element/README.md), [443 - String Compression](../../../problems/0443-string-compression/README.md), and [1209 - Remove Adjacent Duplicates II](../../../problems/1209-remove-all-adjacent-duplicates-in-string-ii/README.md).

## Systems Bridge

Unescaping a packet, filtering samples into the same buffer, and compacting logs can
avoid allocation with this read/write model.

