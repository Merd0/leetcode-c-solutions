# 22 - Monotonic Queue

[Previous](21-queue-and-circular-buffer.md) | [Contents](README.md) | [Turkce](../tr/22-monotonic-queue.md) | [Next](23-heap-and-top-k.md)

## Mental Model

A monotonic queue maintains a moving-window maximum or minimum with amortized O(1)
queries. The front is the current best candidate; the rest are candidates that
still have a chance to become best later.

A newer value that is at least as strong as weaker values at the back permanently
eliminates them. Expired indexes leave from the front.

## Invariant

For a maximum, indexes increase from front to back, values decrease, and every index
belongs to the current window.

```c
while (front < back && deque[front] <= right - k) front++;
while (front < back && a[deque[back - 1]] <= a[right]) back--;
deque[back++] = right;
int maximum = a[deque[front]];
```

Each index enters once and leaves at most once, yielding O(n) total time.

## Difference From A Heap

A heap returns the maximum but needs lazy deletion for arbitrary expired indexes
and costs O(log n). The monotonic queue exploits ordered window arrival and expiry.

## When Not To Use It

Use a heap or tree for arbitrary deletions, full Top-K queries, or non-window
priority operations.

## C Risks

Provide capacity n or implement a true circular deque. Keep expiry and insertion
order consistent with the chosen inclusive window convention.

## Practice In This Repository

[239 - Sliding Window Maximum](../../../problems/0239-sliding-window-maximum/README.md) is the central example. [503 - Next Greater Element II](../../../problems/0503-next-greater-element-ii/README.md) is useful preparation for monotone candidate elimination.

## Systems Bridge

Maintaining the peak of the last N sensor samples supports alarm and envelope
tracking without rescanning every window.

