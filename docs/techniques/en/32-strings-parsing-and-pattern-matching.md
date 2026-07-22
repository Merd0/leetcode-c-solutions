# 32 - Strings, Parsing, And Pattern Matching

[Previous](31-bitwise-xor-and-number-theory.md) | [Contents](README.md) | [Turkce](../tr/32-strings-parsing-and-pattern-matching.md) | [Next](33-matrix-traversal-and-directions.md)

## Mental Model

A C string is a character array ending in `\0`. Parsing turns that stream into
tokens or state transitions. Pattern matching identifies candidate start positions
and proves when a candidate can be skipped.

Character `'7'`, string `"7"`, and number `7` are distinct representations. Convert
explicitly with operations such as `digit = c - '0'`.

## Parser State

A numeric parser can track sign, whether digits appeared, decimal point, and exponent
as a small state machine.

```c
long long value = 0;
while (isdigit((unsigned char)*p)) {
    int digit = *p - '0';
    if (value > (limit - digit) / 10) return overflow_result;
    value = value * 10 + digit;
    p++;
}
```

Detect overflow before multiplication; signed overflow after the fact is already
undefined behavior.

## Pattern-Matching Levels

Naive matching can cost O(nm). KMP uses pattern prefix/suffix information and never
moves the text index backward. Rolling hash updates a window summary quickly but
must account for collisions. A trie shares common prefixes across many strings.

## Invariant

Parser state must completely classify the processed prefix. A matcher must prove
that every skipped start can no longer produce a full match.

## C Risks

Cast to `unsigned char` before `ctype.h` calls. Allocate `n + 1` for output strings,
preserve the terminator, and define buffer ownership and capacity.

## Practice In This Repository

[8 - String to Integer](../../../problems/0008-string-to-integer-atoi/README.md), [65 - Valid Number](../../../problems/0065-valid-number/README.md), [28 - First Occurrence](../../../problems/0028-find-the-index-of-the-first-occurrence-in-a-string/README.md), [468 - Validate IP Address](../../../problems/0468-validate-ip-address/README.md), [1461 - All Binary Codes](../../../problems/1461-check-if-a-string-contains-all-binary-codes-of-size-k/README.md), and [3093 - Longest Common Suffix Queries](../../../problems/3093-longest-common-suffix-queries/README.md).

## Systems Bridge

Command lines, telemetry frames, NMEA-like messages, and binary headers need parser
state machines. Length-bounded APIs are safer for raw buffers.

