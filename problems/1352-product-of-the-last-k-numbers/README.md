# #1352 - Product of the Last K Numbers

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Design, Array, Prefix Product, Stateful API
- Hint: Store products since the last zero. A zero breaks the product chain.
- Solved date: 2026-07-05
- Source: https://leetcode.com/problems/product-of-the-last-k-numbers/

## Problem Statement

TR: Bir sayi akisi icin iki islem tasarla: `add(num)` yeni sayi ekler,
`getProduct(k)` ise son eklenen `k` sayinin carpimini dondurur.

EN: Design a number stream that supports adding values and querying the product
of the last `k` added numbers.

## Starter Code (C)

```c
typedef struct {

} ProductOfNumbers;

ProductOfNumbers* productOfNumbersCreate(void) {

}

void productOfNumbersAdd(ProductOfNumbers* obj, int num) {

}

int productOfNumbersGetProduct(ProductOfNumbers* obj, int k) {

}

void productOfNumbersFree(ProductOfNumbers* obj) {

}
```

## Parameters / Return

- `num`: New number appended to the stream.
- `k`: Number of latest values included in the product query.
- `getProduct`: Returns the product of the last `k` numbers.

## Example

```text
Input:
["ProductOfNumbers","add","add","add","add","add","getProduct","getProduct","getProduct","add","getProduct"]
[[],[3],[0],[2],[5],[4],[2],[3],[4],[8],[2]]

Output:
[null,null,null,null,null,null,20,40,0,null,32]
```

Explanation:

- Last 2 numbers before adding 8 are `5, 4`, product is `20`.
- Last 3 numbers are `2, 5, 4`, product is `40`.
- Last 4 numbers include `0`, so product is `0`.
- After adding `8`, last 2 numbers are `4, 8`, product is `32`.

## Constraints

- `0 <= num <= 100`
- `1 <= k <= 40000`
- At most `40000` calls are made to `add` and `getProduct`
- The product of any contiguous sequence fits in a 32-bit integer

## First Idea: Brute Force

Your first solution stores every number in a struct-owned array:

```c
typedef struct {
    int nums[40001];
    int size;
} ProductOfNumbers;
```

Then `add` writes to `nums[size]` and increments `size`. For `getProduct(k)`,
scan from `size - k` to `size - 1` and multiply the values.

This is a correct way to understand the API:

- `ProductOfNumbers` is the module memory.
- `nums` stores the stream.
- `size` tells where the next value goes.

But it is too slow for worst-case input. If many calls ask for large `k`, each
query repeats up to `40000` multiplications.

## Optimized Approach

Use prefix products since the last zero:

```text
values:  3, 2, 5, 4
prefix:  1, 3, 6, 30, 120
```

The product of the last 2 numbers is:

```text
120 / 6 = 20
```

Zero is the key edge case. If `num == 0`, every product range that crosses this
zero must become `0`, so the prefix chain is reset:

```text
prefix[0] = 1
size = 1
```

Then `getProduct(k)` has two cases:

- If `k >= size`, the query reaches past the current non-zero chain, so it
  includes a zero and returns `0`.
- Otherwise divide two prefix products to get the last `k` product in `O(1)`.

Embedded-C connection: this is the same stateful-module idea as a driver context
or diagnostics context. Instead of recomputing everything on every call, the
struct stores just enough state to answer future queries quickly.

## Complexity

Brute force:

- `add`: `O(1)`
- `getProduct`: `O(k)`
- Space: `O(n)`

Optimized:

- `add`: `O(1)`
- `getProduct`: `O(1)`
- Space: `O(n)`

## Solution

- [solution.c](solution.c)
- [brute_force_tle.c](brute_force_tle.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
