# 31 - Bitwise, XOR, And Number Theory

[Previous](30-dynamic-programming-and-kadane.md) | [Contents](README.md) | [Turkce](../tr/31-bitwise-xor-and-number-theory.md) | [Next](32-strings-parsing-and-pattern-matching.md)

## Mental Model

Bitwise reasoning treats an integer as independent Boolean state channels. A mask
selects bits, shifts move positions, and XOR accumulates difference or parity.
Define what each bit position means before choosing an operator.

Useful identities include `x ^ x = 0`, `x ^ 0 = x`, and `x & (x - 1)` removing
the lowest set bit.

## Mask Contract

```c
unsigned int mask = 1u << bit;
bool set = (value & mask) != 0;
value |= mask;     /* set */
value &= ~mask;    /* clear */
value ^= mask;     /* toggle */
```

Unsigned types make high-bit and right-shift behavior more predictable. `bit` must
be smaller than the type width.

## Counting Set Bits

```c
int count = 0;
while (value != 0) {
    value &= value - 1;
    count++;
}
```

Each iteration removes exactly one set bit.

## When XOR Fits

XOR is natural when duplicate pairs cancel, changed bit positions are required, or
prefix parity is tracked. It does not replace frequency counts or carry arithmetic.

## Number-Theory Bridge

Euclid handles GCD, `% 10` and `/ 10` process digits, and a single set bit identifies
powers of two. State zero and negative preconditions explicitly.

## C Risks

Signed shifts, shifting by the type width, integer promotions after `~`, and literal
types matter. Prefer `<stdint.h>` types for hardware-defined widths.

## Practice In This Repository

[136 - Single Number](../../../problems/0136-single-number/README.md), [191 - Number of 1 Bits](../../../problems/0191-number-of-1-bits/README.md), [393 - UTF-8 Validation](../../../problems/0393-utf-8-validation/README.md), [1318 - Minimum Flips](../../../problems/1318-minimum-flips-to-make-a-or-b-equal-to-c/README.md), and [2997 - XOR Equal to K](../../../problems/2997-minimum-number-of-operations-to-make-array-xor-equal-to-k/README.md).

## Systems Bridge

Register fields, status flags, protocol bits, and pixel formats are direct mask and
shift applications. Reserved bits must remain preserved.

