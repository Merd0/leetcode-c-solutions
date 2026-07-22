# 35 - 2D Prefix Sums And Image Regions

[Previous](34-matrix-neighborhoods-and-in-place-state.md) | [Contents](README.md) | [Turkce](../tr/35-2d-prefix-sum-and-image-regions.md)

## Mental Model

A 2D prefix sum is also known as an integral image. Each prefix cell stores the sum
of a rectangle from the top-left origin. Any rectangular ROI can then be answered
from four prefix values in O(1).

An extra zero row and column simplify boundaries. `prefix[r + 1][c + 1]` contains
input rectangle `[0..r][0..c]`.

## Build Invariant

```c
prefix[r + 1][c + 1] = image[r][c]
    + prefix[r][c + 1]
    + prefix[r + 1][c]
    - prefix[r][c];
```

The top and left summaries are added. Their top-left overlap was counted twice, so
it is subtracted once before adding the current pixel.

## ROI Formula

For the inclusive rectangle from `(r1, c1)` to `(r2, c2)`:

```c
sum = prefix[r2 + 1][c2 + 1]
    - prefix[r1][c2 + 1]
    - prefix[r2 + 1][c1]
    + prefix[r1][c1];
```

Subtract the region above and left of the ROI, then add back their overlap because
it was subtracted twice.

## Why It Is Powerful

Build time is O(rows * cols), and every rectangular query is O(1). It is valuable
for many ROIs or box-filter queries over an immutable image.

## When Not To Use It

A single small neighborhood is simpler with direct loops. Frequent image updates
invalidate a large suffix of the integral image and may need a dynamic 2D structure.

## C Risks

Region sums can be much wider than pixel values; use `long long`. Free every row and
then the pointer array. Document inclusive and half-open coordinate conventions.

## Practice In This Repository

[304 - Range Sum Query 2D](../../../problems/0304-range-sum-query-2d-immutable/README.md) is the direct implementation. Compare aggregate reasoning in [2125 - Number of Laser Beams](../../../problems/2125-number-of-laser-beams-in-a-bank/README.md) and [1572 - Matrix Diagonal Sum](../../../problems/1572-matrix-diagonal-sum/README.md).

## MEOS Bridge

ROI brightness, fast box filters, local contrast, and target-region energy are
direct electro-optical uses of integral images.

