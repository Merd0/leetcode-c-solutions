# 08 - Fixed-Size Sliding Window

[Previous](07-in-place-read-write.md) | [Contents](README.md) | [Turkce](../tr/08-fixed-sliding-window.md) | [Next](09-variable-sliding-window.md)

## Mental Model

When every contiguous group of exactly `k` elements must be examined, adjacent
groups share `k - 1` values. Moving right removes one old value and adds one new
value instead of recomputing the entire group.

The method depends on contiguity. A subset or arbitrary selection has no equivalent
left and right boundary.

## Invariant

After the first window is built, `sum` always represents exactly the latest `k`
elements.

```c
long long sum = 0;
for (int i = 0; i < k; i++) sum += a[i];

for (int right = k; right < n; right++) {
    sum += a[right];
    sum -= a[right - k];
    /* sum describes [right-k+1, right] */
}
```

`right - k` is the old left endpoint that falls outside after the new value enters.

## Why It Works

The first summary is computed directly. Every transition removes precisely the
leaving value and adds precisely the entering one, so induction preserves correctness.

## When Not To Use It

Use a variable window when size depends on validity, and prefix sums for many
independent range queries. Define behavior for `k == 0` and `k > n`.

## Cost And C Risks

Time is O(n), space O(1). Compare averages using `sum >= threshold * k` when possible,
and use `long long` for both accumulated sums and products.

## Practice In This Repository

[643 - Maximum Average Subarray I](../../../problems/0643-maximum-average-subarray-i/README.md), [1343 - Sub-arrays of Size K](../../../problems/1343-number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/README.md), [1456 - Maximum Number of Vowels](../../../problems/1456-maximum-number-of-vowels-in-a-substring-of-given-length/README.md), and [1652 - Defuse the Bomb](../../../problems/1652-defuse-the-bomb/README.md).

## Systems Bridge

Moving averages, short-term energy, threshold counts over the last N samples, and
noise estimates are fixed-window signal operations.

