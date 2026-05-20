# #0566 - Reshape the Matrix

- Difficulty: Easy
- Solved: 2026-05-21
- LeetCode: https://leetcode.com/problems/reshape-the-matrix/
- Topics: Matrix, Simulation

## Problem

TR: Bir matrisi verilen `r` satir ve `c` sutun boyutuna donustur. Eleman sirasi satir satir ayni kalmalidir. Boyut uymazsa orijinal sekil dondurulur.

EN: Reshape a matrix into `r` rows and `c` columns while preserving row-major order. If the size does not match, return the original shape.

## Starter Code (C)

```c
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {

}
```

## Parameters

- `mat`: Input matrix.
- `matSize`: Number of rows in `mat`.
- `matColSize`: Column count for each row.
- `r`: Requested row count.
- `c`: Requested column count.
- `returnSize`: Output row count.
- `returnColumnSizes`: Output column sizes for returned matrix.

## Return

TR: Yeni matris pointer'i. Donus boyutlari `returnSize` ve `returnColumnSizes` ile verilir.

EN: Pointer to the returned matrix. Returned dimensions are written through `returnSize` and `returnColumnSizes`.

## Example

```text
Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]
```

## Approach

TR: Tum elemanlari tek boyutlu row-major akista dusun. `index` degerini eski ve yeni satir/sutunlara cevir.

EN: Treat all values as one row-major sequence. Convert each flat `index` into old and new row/column positions.

## Solution

- [solution.c](solution.c)
