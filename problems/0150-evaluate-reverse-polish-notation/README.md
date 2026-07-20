# #0150 - Evaluate Reverse Polish Notation

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Math, Stack
- Hint: Push numbers; when an operator appears, pop the last two numbers and push the result.
- Solved date: 2026-05-23
- Source: https://leetcode.com/problems/evaluate-reverse-polish-notation/

## Problem Statement

TR: Reverse Polish Notation formatinda token dizisi verilir. Ifadeyi hesaplayip sonucu dondur.

EN: Given tokens in Reverse Polish Notation, evaluate the expression and return its result.

## Starter Code (C)

```c
int evalRPN(char** tokens, int tokensSize) {

}
```

## Parameters

- `tokens`: Number and operator tokens.
- `tokensSize`: Number of tokens.

## Return

TR: Ifadenin hesaplanmis tamsayi sonucu.

EN: Return the evaluated integer result.

## Examples

### Example 1

```text
Input: tokens = ["2","1","+","3","*"]
Output: 9
Explanation:
(2 + 1) * 3 = 9.
```

### Example 2

```text
Input: tokens = ["4","13","5","/","+"]
Output: 6
```

## Constraints

- `1 <= tokens.length <= 10^4`
- Tokens are valid numbers or one of `+`, `-`, `*`, `/`.
- Division between integers truncates toward zero.

## Approach

TR: Sayi tokenlarini stack'e at. Operator gelince son iki sayiyi al, islemi uygula ve sonucu tekrar stack'e koy. Sonda stack'teki tek deger cevaptir.

EN: Push number tokens onto the stack. When an operator appears, pop the last two numbers, apply the operation, and push the result. The final stack value is the answer.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
