# 24 - Streams And Iterators

[Previous](23-heap-and-top-k.md) | [Contents](README.md) | [Turkce](../tr/24-streams-and-iterators.md) | [Next](25-stateful-apis-design-and-ownership.md)

## Mental Model

A stream problem does not reveal all input in advance. Each call brings new data,
and the object retains enough history for future answers. An iterator consumes a
compressed or segmented representation as though it produced individual values.

Ask whether the next call requires the whole past or only a compact summary.

## Invariant

In an RLE iterator, `index` identifies the current run and `remaining` its unconsumed
count. After `next(n)`, total consumption increases by exactly n and state points
to the first unconsumed encoded item.

```c
while (n > current_count && index < length) {
    n -= current_count;
    index += 2;
    load_current_run();
}
consume_from_current(n);
```

Operate on run counts instead of expanding all values.

## Online Versus Offline

An offline algorithm can inspect and sort future data. An online algorithm decides
from past and present state only, often requiring monotonic structures, heaps, or
prefix summaries.

## When It Is Impossible

If future data can invalidate an irrevocable past answer, a fully online answer may
not exist without delayed output or a second pass.

## C Risks

Local variables disappear between calls, so persistent state belongs in the struct.
Handle stream exhaustion, empty runs, and consumption overflow.

## Practice In This Repository

[900 - RLE Iterator](../../../problems/0900-rle-iterator/README.md), [901 - Online Stock Span](../../../problems/0901-online-stock-span/README.md), [933 - Recent Calls](../../../problems/0933-number-of-recent-calls/README.md), [1352 - Product of the Last K](../../../problems/1352-product-of-the-last-k-numbers/README.md), and [1656 - Ordered Stream](../../../problems/1656-design-an-ordered-stream/README.md).

## Systems Bridge

Sensor samples and communication packets are natural streams. Bounded state is
often essential for predictable RAM use and latency.

