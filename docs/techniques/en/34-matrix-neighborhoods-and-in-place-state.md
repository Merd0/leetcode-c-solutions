# 34 - Matrix Neighborhoods And In-Place State

[Previous](33-matrix-traversal-and-directions.md) | [Contents](README.md) | [Turkce](../tr/34-matrix-neighborhoods-and-in-place-state.md) | [Next](35-2d-prefix-sum-and-image-regions.md)

## Mental Model

When output at one pixel depends on nearby cells, define offsets around center
`(row, col)`. A 3x3 neighborhood spans rows `row - 1..row + 1` and columns
`col - 1..col + 1`.

Missing border neighbors are not automatically zero. Skip, pad, clamp, or mirror
them according to the problem's boundary policy. Even-sized windows need an explicit
anchor because they have no single center cell.

## Invariant

Each output cell is computed only from defined input neighbors, with `sum` and
`count` reset for every center.

```c
for (int nr = row - 1; nr <= row + 1; nr++) {
    for (int nc = col - 1; nc <= col + 1; nc++) {
        if (nr >= 0 && nr < rows && nc >= 0 && nc < cols) {
            sum += image[nr][nc];
            count++;
        }
    }
}
output[row][col] = sum / count;
```

## Output Shape

Without padding, a valid 3x3 window fits at only `rows - 2` by `cols - 2` positions.
Largest Local shrinks output. Image Smoother counts available border neighbors and
keeps the original shape.

## In-Place State Problem

Writing a new pixel directly into the source can make later windows read new state
instead of old state. A separate output is clearest. In-place methods need a proven
encoding that preserves both versions until the pass completes.

## Allocation And Ownership

Allocate `rows * sizeof(int *)` for row pointers, then `cols * sizeof(int)` per row.
On partial failure, release all rows already allocated.

## Practice In This Repository

[661 - Image Smoother](../../../problems/0661-image-smoother/README.md), [2373 - Largest Local Values](../../../problems/2373-largest-local-values-in-a-matrix/README.md), [289 - Game of Life](../../../problems/0289-game-of-life/README.md), [73 - Set Matrix Zeroes](../../../problems/0073-set-matrix-zeroes/README.md), and [832 - Flipping an Image](../../../problems/0832-flipping-an-image/README.md).

## MEOS Bridge

Mean filters, local maxima, morphology, and convolution share the neighborhood model.
Boundary policy and old/new frame separation directly change image output.

