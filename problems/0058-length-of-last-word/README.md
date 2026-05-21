# #0058 - Length of Last Word

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: String
- Companies: Not tracked in this repo
- Hint: Ignore trailing spaces before counting the last word.
- Solved: 2026-05-21
- LeetCode: https://leetcode.com/problems/length-of-last-word/

## Problem Statement

TR: Kelimeler ve bosluklardan olusan bir string verilir. Sondaki kelimenin uzunlugunu dondur.

EN: Given a string made of words and spaces, return the length of the last word.

## Starter Code (C)

```c
int lengthOfLastWord(char* s) {

}
```

## Parameters

- `s`: Input string containing words and spaces.

## Return

TR: Son kelimenin karakter sayisi.

EN: Return the number of characters in the last word.

## Examples

### Example 1

```text
Input: s = "Hello World"
Output: 5
Explanation:
The last word is "World".
```

### Example 2

```text
Input: s = "   fly me   to   the moon  "
Output: 4
Explanation:
Trailing spaces are skipped, then "moon" is counted.
```

### Example 3

```text
Input: s = "luffy is still joyboy"
Output: 6
```

## Constraints

- `1 <= s.length <= 10^4`
- `s` contains English letters and spaces.
- There is at least one word in `s`.

## Approach

TR: Once stringin sonuna git. Sondaki bosluklari atla, sonra bir bosluk veya string basi gorene kadar karakter say.

EN: Move to the end of the string first. Skip trailing spaces, then count characters until a space or the beginning of the string is reached.

## Solution

- [solution.c](solution.c)
