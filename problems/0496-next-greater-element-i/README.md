# #0496 - Next Greater Element I

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Hash Table, Stack, Monotonic Stack
- Hint: For each value in `nums1`, find its position in `nums2`, then scan to the right.
- Solved date: 2026-05-23
- Source: https://leetcode.com/problems/next-greater-element-i/

## Problem Statement

TR: `nums1`, `nums2` dizisinin alt kumesidir. `nums1` icindeki her eleman icin `nums2`de saginda bulunan ilk daha buyuk elemani dondur; yoksa `-1` yaz.

EN: `nums1` is a subset of `nums2`. For each value in `nums1`, return the first greater value to its right in `nums2`, or `-1` if it does not exist.

## Starter Code (C)

```c
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

}
```

## Parameters

- `nums1`: Values to answer.
- `nums2`: Reference array containing all values.
- `returnSize`: Output array size written by the function.

## Return

TR: Her `nums1[i]` icin next greater degerini tutan dizi.

EN: Return an array containing the next greater value for every `nums1[i]`.

## Examples

### Example 1

```text
Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
```

### Example 2

```text
Input: nums1 = [2,4], nums2 = [1,2,3,4]
Output: [3,-1]
```

## Constraints

- `1 <= nums1.length <= nums2.length <= 1000`
- All integers are unique.
- All values of `nums1` appear in `nums2`.

## Approach

TR: Her `nums1` elemani icin once `nums2`deki yerini bul. Sonra sag tarafa dogru daha buyuk ilk degeri ara. Bulamazsan sonuc `-1` kalir.

EN: For each `nums1` value, find its index in `nums2`, then scan to the right for the first greater value. If none is found, the result stays `-1`.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
