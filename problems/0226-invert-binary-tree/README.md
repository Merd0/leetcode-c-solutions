# #0226 - Invert Binary Tree

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Tree, Depth-First Search, Breadth-First Search, Binary Tree
- Hint: Swap left and right children at every node.
- Solved date: 2026-05-26
- Source: https://leetcode.com/problems/invert-binary-tree/

## Problem Statement

TR: Bir binary tree veriliyor. Her node icin sol ve sag child'i yer degistirerek agaci ters cevir.

EN: Given the root of a binary tree, invert the tree and return its root.

## Starter Code (C)

```c
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {

}
```

## Parameters / Return

- `root`: root node of the binary tree.
- Returns the root of the inverted tree.

## Examples

```text
Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]
```

```text
Input: root = [2,1,3]
Output: [2,3,1]
```

```text
Input: root = []
Output: []
```

## Constraints

- Number of nodes is in the range `[0, 100]`.
- `-100 <= Node.val <= 100`

## Approach

Use recursion. If the node is `NULL`, return `NULL`. Otherwise, swap its left
and right children, then recursively invert both subtrees.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
