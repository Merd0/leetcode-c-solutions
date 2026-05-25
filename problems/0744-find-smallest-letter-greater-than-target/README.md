# #0744 - Find Smallest Letter Greater Than Target

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Binary Search
- Hint: Keep the best greater letter seen so far, and wrap to the first letter if needed.
- Solved date: 2026-05-25
- Source: LeetCode #744

## Problem Statement

TR: Sirali harf dizisi ve `target` veriliyor. `target` karakterinden buyuk olan en kucuk harfi dondur. Gerekirse basa sar.

EN: Given a sorted array of letters and a target, return the smallest letter that is greater than target. The search wraps around.

## Starter Code (C)

```c
char nextGreatestLetter(char* letters, int lettersSize, char target) {

}
```

## Parameters / Return

- `letters`: sorted character array.
- `lettersSize`: number of letters.
- `target`: target character.
- Returns the smallest letter greater than `target`.

## Examples

```text
Input: letters = ["c","f","j"], target = "a"
Output: "c"
```

```text
Input: letters = ["c","f","j"], target = "c"
Output: "f"
```

```text
Input: letters = ["x","x","y","y"], target = "z"
Output: "x"
Explanation: No letter is greater than "z", so the answer wraps to the first letter.
```

## Constraints

- `2 <= letters.length <= 10^4`
- `letters[i]` is a lowercase English letter.
- `letters` is sorted in non-decreasing order.
- `letters` contains at least two different characters.

## Approach

Initialize `answer` as `letters[0]` to handle wrap-around. During binary
search, whenever `letters[mid] > target`, store it as a candidate and continue
searching to the left for a smaller valid letter.
