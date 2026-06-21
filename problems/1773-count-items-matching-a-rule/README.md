# #1773 - Count Items Matching a Rule

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, String
- Hint: Convert the rule key into a column index, then compare that column.
- Solved date: 2026-06-22
- Source: https://leetcode.com/problems/count-items-matching-a-rule/
- Note: Daily practice question

## Problem Statement

TR: Her item uc string alanindan olusur: `[type, color, name]`.
`ruleKey` hangi alana bakilacagini, `ruleValue` ise aranacak degeri soyler.
Kurala uyan item sayisini dondur.

EN: Each item has three string fields: `[type, color, name]`. `ruleKey`
chooses which field to inspect, and `ruleValue` is the value to match.
Return how many items satisfy the rule.

## Starter Code (C)

```c
int countMatches(char*** items, int itemsSize, int* itemsColSize, char* ruleKey, char* ruleValue) {

}
```

## Parameters / Return

- `items`: 2D string array where each row is `[type, color, name]`.
- `itemsSize`: Number of item rows.
- `itemsColSize`: Column counts supplied by LeetCode.
- `ruleKey`: One of `"type"`, `"color"`, or `"name"`.
- `ruleValue`: Value to compare against.
- Returns the number of matching rows.

## Examples

```text
Input:
items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]]
ruleKey = "color"
ruleValue = "silver"
Output: 1
```

```text
Input:
items = [["phone","blue","pixel"],["computer","silver","phone"],["phone","gold","iphone"]]
ruleKey = "type"
ruleValue = "phone"
Output: 2
```

## Constraints

- `1 <= items.length <= 10000`
- `items[i].length == 3`
- `ruleKey` is `"type"`, `"color"`, or `"name"`

## Approach

First convert `ruleKey` into the column that should be checked:

- `"type"` -> `0`
- `"color"` -> `1`
- `"name"` -> `2`

Then scan all rows and compare `items[i][index]` with `ruleValue` using
`strcmp`. A match increments `count`.

`itemsColSize` is part of the LeetCode C signature, but every item has exactly
three columns, so this solution does not need to read it.

## Complexity

- Time: `O(n * m)`, where string comparison length is `m`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
