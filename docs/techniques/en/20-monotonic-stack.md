# 20 - Monotonic Stack

[Previous](19-stack.md) | [Contents](README.md) | [Turkce](../tr/20-monotonic-stack.md) | [Next](21-queue-and-circular-buffer.md)

## Mental Model

A monotonic stack keeps unresolved candidates in increasing or decreasing value
order. A new value may answer several old candidates, which are popped permanently.
The new value is both closer and strong enough, so those candidates never need a
later value.

Store indexes when both value lookup and distance are needed.

## Invariant

For next-greater queries, every stored index is unresolved and its value participates
in the chosen monotone order.

```c
for (int i = 0; i < n; i++) {
    while (top > 0 && a[stack[top - 1]] < a[i]) {
        int index = stack[--top];
        answer[index] = a[i];
    }
    stack[top++] = i;
}
```

Each index is pushed once and popped at most once, so the total cost is O(n).

## Direction And Equality

Greater versus greater-or-equal changes the pop condition. A nearest answer on the
left versus right changes traversal direction. Derive both from the statement.

## When Not To Use It

If candidates cannot be eliminated monotonically, use a heap, tree, or another
query structure.

## C Risks

For circular arrays, read with `i % n` during two passes but avoid pushing every
index twice. Initialize unresolved answers to `-1`.

## Practice In This Repository

[496 - Next Greater Element I](../../../problems/0496-next-greater-element-i/README.md), [503 - Next Greater Element II](../../../problems/0503-next-greater-element-ii/README.md), [739 - Daily Temperatures](../../../problems/0739-daily-temperatures/README.md), [901 - Online Stock Span](../../../problems/0901-online-stock-span/README.md), and [1475 - Final Prices](../../../problems/1475-final-prices-with-a-special-discount-in-a-shop/README.md).

## Systems Bridge

Distance to the next threshold crossing and online span calculations over time
series use the same candidate-elimination principle.

