# #0566 - Reshape the Matrix

- Difficulty: Easy
- Solved: 2026-05-21
- LeetCode: https://leetcode.com/problems/reshape-the-matrix/
- Topics: Matrix, Simulation

## Question

TR: Matrisi ayni eleman sirasini koruyarak istenen satir/sutun boyutuna donustur.

EN: Reshape a matrix to the requested row/column size while preserving element order.

## Idea

TR: Elemanlari row-major tek indeks gibi dusunup yeni konuma yerlestir.

EN: Treat values as one row-major sequence and map each index to the new position.

## Code

- [solution.c](solution.c)
