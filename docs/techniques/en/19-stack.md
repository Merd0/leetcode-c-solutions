# 19 - Stack

[Previous](18-intervals.md) | [Contents](README.md) | [Turkce](../tr/19-stack.md) | [Next](20-monotonic-stack.md)

## Mental Model

A stack is LIFO: the last item inserted is the first removed. It naturally models
work that nests and closes in reverse order, including parentheses, calls, paths,
expression operands, and undo history.

The stack represents unfinished work, not merely stored values.

## Invariant

During a scan, the stack contains all opened but unmatched items from the processed
prefix in the only order in which they may close.

```c
int top = 0;
for (int i = 0; s[i] != '\0'; i++) {
    if (is_open(s[i])) {
        stack[top++] = s[i];
    } else {
        if (top == 0 || !matches(stack[top - 1], s[i])) return false;
        top--;
    }
}
return top == 0;
```

Here `top` is both the element count and the next free position; the top item is
at `top - 1`.

## Array-Based Stack

When maximum capacity is known, an array and integer top are simple and predictable.
A dynamic stack needs resizing. A linked stack performs allocation per push.

## When Not To Use It

Use a queue for oldest-first work. A next-greater query requires the stronger
monotonic-stack invariant rather than a generic stack.

## Cost And C Risks

Push and pop are O(1). Guard underflow and capacity, define the meaning of `top`,
and never return pointers to expired local storage.

## Practice In This Repository

[20 - Valid Parentheses](../../../problems/0020-valid-parentheses/README.md), [71 - Simplify Path](../../../problems/0071-simplify-path/README.md), [150 - Reverse Polish Notation](../../../problems/0150-evaluate-reverse-polish-notation/README.md), and [946 - Validate Stack Sequences](../../../problems/0946-validate-stack-sequences/README.md).

## Systems Bridge

Nested packet fields, parser context, and bounded undo history can use a fixed stack
with an explicit capacity contract.

