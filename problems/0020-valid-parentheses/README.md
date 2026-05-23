# #0020 - Valid Parentheses

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: String, Stack
- Companies: Not tracked in this repo
- Hint: Push opening brackets, and every closing bracket must match the top of the stack.
- Solved: 2026-05-23
- LeetCode: https://leetcode.com/problems/valid-parentheses/

## Problem Statement

TR: Sadece `()[]{}` karakterlerinden olusan bir string verilir. Parantezlerin dogru sirada acilip kapandigini kontrol et.

EN: Given a string containing only `()[]{}`, check whether every bracket is opened and closed in the correct order.

## Starter Code (C)

```c
bool isValid(char* s) {

}
```

## Parameters

- `s`: Bracket string.

## Return

TR: Parantezler gecerliyse `true`, degilse `false`.

EN: Return `true` if the brackets are valid; otherwise return `false`.

## Examples

### Example 1

```text
Input: s = "()"
Output: true
```

### Example 2

```text
Input: s = "()[]{}"
Output: true
```

### Example 3

```text
Input: s = "(]"
Output: false
```

## Constraints

- `1 <= s.length <= 10^4`
- `s` consists only of parentheses characters `()[]{}`.

## Approach

TR: Acilan parantezleri stack'e koy. Kapanan parantez geldiginde stack bos olmamali ve en ustteki acilis karakteriyle eslesmeli. En sonda stack bossa ifade gecerlidir.

EN: Push opening brackets onto a stack. When a closing bracket appears, the stack must not be empty and the top opening bracket must match it. The string is valid only if the stack ends empty.

## Solution

- [solution.c](solution.c)
