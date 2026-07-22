# 09 - Variable-Size Sliding Window

[Previous](08-fixed-sliding-window.md) | [Contents](README.md) | [Turkce](../tr/09-variable-sliding-window.md) | [Next](10-prefix-sums.md)

## Mental Model

When window size is not fixed, two boundaries move according to a validity rule.
`right` adds data; when the condition fails, `left` advances until validity returns.
Both boundaries move monotonically instead of retrying every start/end pair.

The validity state must change predictably as the window grows or shrinks. Sums of
positive numbers are a standard example.

## Invariant

After the inner loop, `[left, right]` is valid and, in many problems, all farther-left
windows ending at the same `right` are invalid.

```c
int left = 0;
long long state = 0;

for (int right = 0; right < n; right++) {
    add(&state, a[right]);
    while (!valid(state)) {
        remove_value(&state, a[left]);
        left++;
    }
    use_window(left, right);
}
```

Inclusive window length is `right - left + 1`.

## Why The Inner While Is Still Linear

`right` advances n times and `left` advances at most n times over the whole run.
The total number of boundary moves is O(n), not O(n^2).

## Critical Assumption

Negative numbers can make a sum decrease when a window grows, destroying the
monotone shrink rule. Prefix sums with hashing may then be required.

## Cost And C Risks

Time is O(n), state space O(1) or O(domain). Removal must exactly reverse insertion,
including derived counts such as the number of distinct characters.

## Practice In This Repository

[209 - Minimum Size Subarray Sum](../../../problems/0209-minimum-size-subarray-sum/README.md), [713 - Subarray Product Less Than K](../../../problems/0713-subarray-product-less-than-k/README.md), [3 - Longest Substring](../../../problems/0003-longest-substring-without-repeating-characters/README.md), and [76 - Minimum Window Substring](../../../problems/0076-minimum-window-substring/README.md).

## Systems Bridge

Events in the last T milliseconds, variable valid packet regions, and samples kept
until an energy budget is reached follow the same boundary model.

