# #2300 - Successful Pairs of Spells and Potions

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Two Pointers, Binary Search, Sorting
- Hint: Sort `potions`, then binary search the first potion that reaches the threshold for each spell.
- Solved date: 2026-06-28
- Source: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
- Note: Medium practice question

## Problem Statement

TR: Her `spell` ve `potion` cifti icin guc `spell * potion` olur. Bu carpim
`success` degerine esit veya buyukse cift basarilidir. Her spell icin kac potion
ile basarili cift olustugunu dondur.

EN: For each spell and potion pair, the strength is `spell * potion`. A pair is
successful when that product is at least `success`. Return how many potions work
for every spell.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* successfulPairs(int* spells, int spellsSize, int* potions, int potionsSize, long long success, int* returnSize) {

}
```

## Parameters / Return

- `spells`: Spell strengths.
- `spellsSize`: Number of spells.
- `potions`: Potion strengths.
- `potionsSize`: Number of potions.
- `success`: Minimum product required for a successful pair.
- `returnSize`: Must be set to `spellsSize`.
- Returns: A newly allocated array where `answer[i]` is the number of successful potions for `spells[i]`.

## Examples

```text
Input:  spells = [5,1,3], potions = [1,2,3,4,5], success = 7
Output: [4,0,3]

spell 5 works with potions 2,3,4,5.
spell 1 works with no potion.
spell 3 works with potions 3,4,5.
```

```text
Input:  spells = [3,1,2], potions = [8,5,8], success = 16
Output: [2,0,2]
```

## Constraints

- `1 <= spells.length, potions.length <= 100000`
- `1 <= spells[i], potions[i] <= 100000`
- `1 <= success <= 10000000000`

## Initial Brute Force Idea

The direct solution checks every spell with every potion:

```c
if ((long long)spells[i] * potions[j] >= success) {
    count++;
}
```

This is logically correct, but it can be too slow:

```text
Time: O(spellsSize * potionsSize)
```

Also, the multiplication must be cast to `long long`. Otherwise, two `int`
values are multiplied as `int` first, which can overflow before the comparison.

## Optimized Approach

Sort `potions` in ascending order. For a fixed `spell`, larger potions always
produce larger products.

So for each spell, binary search the first potion where:

```text
spell * potion >= success
```

If that first valid index is `firstValid`, then every potion from there to the
end works:

```text
answer = potionsSize - firstValid
```

This is much faster:

```text
sort potions: O(m log m)
each spell:   O(log m)
total:        O(m log m + n log m)
```

## Complexity

- Time: `O(potionsSize log potionsSize + spellsSize log potionsSize)`
- Extra space: `O(1)` besides the returned array
- Note: The solution sorts `potions` in place.

## Solutions

- [solution.c](solution.c) - optimized sort + binary search
- [brute_force_tle.c](brute_force_tle.c) - learning attempt, correct idea but too slow
