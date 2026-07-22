# 33 - Matrix Traversal And Direction Arrays

[Previous](32-strings-parsing-and-pattern-matching.md) | [Contents](README.md) | [Turkce](../tr/33-matrix-traversal-and-directions.md) | [Next](34-matrix-neighborhoods-and-in-place-state.md)

## Mental Model

The first matrix contract is coordinate meaning: `matrix[row][col]`. `row` is the
vertical coordinate and `col` the horizontal coordinate. Explicit names prevent
many index swaps hidden by generic `i, j` names.

Standard traversal places rows outside and columns inside. C row storage also makes
this order commonly favorable for cache locality.

## Dimension Contract

LeetCode represents `int **matrix` as row pointers. `matrixSize` is row count and
`matrixColSize[row]` is the width of that row. Confirm rectangular shape before
using one shared column count.

```c
for (int row = 0; row < rows; row++) {
    for (int col = 0; col < cols; col++) {
        use(matrix[row][col]);
    }
}
```

## Direction Arrays

Store four-neighbor movement as data instead of repeating branches:

```c
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

for (int d = 0; d < 4; d++) {
    int nr = row + dr[d];
    int nc = col + dc[d];
    if (0 <= nr && nr < rows && 0 <= nc && nc < cols) use(nr, nc);
}
```

`dr[d], dc[d]` is one movement pair. Add four diagonals for eight-neighbor traversal.

## Specialized Traversals

Spiral, diagonal, transpose, and rotated traversals introduce boundary or coordinate
state. State which row or column becomes complete after each transition.

## C Risks

Watch `matrix[col][row]`, `col <= cols`, reading `matrixColSize[0]` for an empty
matrix, and applying one width to jagged rows.

## Practice In This Repository

[54 - Spiral Matrix](../../../problems/0054-spiral-matrix/README.md), [48 - Rotate Image](../../../problems/0048-rotate-image/README.md), [74 - Search a 2D Matrix](../../../problems/0074-search-a-2d-matrix/README.md), [867 - Transpose Matrix](../../../problems/0867-transpose-matrix/README.md), and [1572 - Matrix Diagonal Sum](../../../problems/1572-matrix-diagonal-sum/README.md).

## MEOS Bridge

Image buffers are traversed in pixel coordinates. Direction arrays support connected
regions, neighbor processing, edge following, and motion models.

