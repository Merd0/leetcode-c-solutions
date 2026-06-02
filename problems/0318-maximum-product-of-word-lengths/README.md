# #0318 - Maximum Product of Word Lengths

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, String, Bit Manipulation
- Hint: Represent each word's letters with a 26-bit mask.
- Solved date: 2026-06-02
- Source: LeetCode #318

## Problem Statement

TR: String array `words` veriliyor. Ortak harfi olmayan iki kelimenin uzunluklari
carpiminin maksimum degerini dondur.

EN: Given an array of words, return the maximum value of
`length(words[i]) * length(words[j])` where the two words share no common
letters.

## Starter Code (C)

```c
int maxProduct(char** words, int wordsSize) {

}
```

## Parameters / Return

- `words`: array of lowercase strings.
- `wordsSize`: number of words.
- Returns the maximum valid length product.

## Examples

```text
Input: words = ["abcw","baz","foo","bar","xtfn","abcdef"]
Output: 16
Explanation: "abcw" and "xtfn" share no letters.
```

```text
Input: words = ["a","ab","abc","d","cd","bcd","abcd"]
Output: 4
```

```text
Input: words = ["a","aa","aaa","aaaa"]
Output: 0
```

## Constraints

- `2 <= words.length <= 1000`
- `1 <= words[i].length <= 1000`
- `words[i]` contains only lowercase English letters.

## Approach

Build one integer mask per word. Bit `0` represents `a`, bit `1` represents
`b`, and so on. If two words have no common letters, their masks satisfy:

```c
(masks[i] & masks[j]) == 0
```

Then compute the product of their lengths and keep the maximum.
