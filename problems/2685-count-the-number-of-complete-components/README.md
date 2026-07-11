# #2685 - Count the Number of Complete Components

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Depth-First Search, Breadth-First Search, Union-Find, Graph Theory
- Hint: A component with `m` vertices is complete only if it has exactly
  `m * (m - 1) / 2` edges.
- Solved date: 2026-07-11
- Source: https://leetcode.com/problems/count-the-number-of-complete-components/
- Note: Daily challenge

## Problem Statement

TR: `0` ile `n - 1` arasinda numaralanmis dugumlerden olusan undirected graph
veriliyor. Her connected component icin, component icindeki her iki dugum
arasinda edge varsa o component complete sayilir. Complete component sayisini
dondur.

EN: Given an undirected graph with vertices `0` to `n - 1`, count how many
connected components are complete. A component is complete when every pair of
vertices inside it has an edge.

## Starter Code (C)

```c
int countCompleteComponents(int n, int** edges, int edgesSize, int* edgesColSize) {

}
```

## Parameters / Return

- `n`: Number of vertices.
- `edges`: Undirected edge list.
- `edgesSize`: Number of edges.
- `edgesColSize`: LeetCode metadata for the two-column edge array.
- Returns the number of complete connected components.

## Examples

```text
Input:  n = 6, edges = [[0,1],[0,2],[1,2],[3,4]]
Output: 3
```

The components are `{0,1,2}`, `{3,4}`, and `{5}`. All three are complete.

```text
Input:  n = 6, edges = [[0,1],[0,2],[1,2],[3,4],[3,5]]
Output: 1
```

The component `{0,1,2}` is complete. The component `{3,4,5}` is not complete
because one pair is missing an edge.

## Constraints

- `1 <= n <= 50`
- `0 <= edges.length <= n * (n - 1) / 2`
- `edges[i].length == 2`
- `0 <= ai, bi <= n - 1`
- `ai != bi`
- There are no repeated edges.

## Approach

Use Union-Find to group vertices into connected components.

After all unions:

1. Count how many vertices belong to each root.
2. Count how many edges belong to each root.
3. For each root, compare the edge count with the complete-graph formula:

```text
required edges = m * (m - 1) / 2
```

If the component has exactly that many edges, it is complete.

Single-vertex components work naturally:

```text
m = 1
required edges = 1 * 0 / 2 = 0
```

Graph connection: this is connected-component detection plus a structural
validation step. In systems terms, it is similar to first grouping related
records and then checking whether the group satisfies an invariant.

## Complexity

- Time: `O(n + edgesSize * alpha(n))`
- Space: `O(n)`

## Solution

- [solution.c](solution.c)
