# #0104 - Maximum Depth of Binary Tree

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Tree, Depth-First Search, Breadth-First Search, Binary Tree
- Hint: The depth of a node is one plus the deeper depth of its children.
- Solved date: 2026-05-26
- Source: https://leetcode.com/problems/maximum-depth-of-binary-tree/

## Problem Statement

TR: Bir binary tree veriliyor. Root'tan en uzak leaf node'a kadar olan maksimum derinligi dondur.

EN: Given a binary tree, return its maximum depth.

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
int maxDepth(struct TreeNode* root) {

}
```

## Parameters / Return

- `root`: root node of the binary tree.
- Returns the maximum depth of the tree.

## Examples

```text
Input: root = [3,9,20,null,null,15,7]
Output: 3
```

```text
Input: root = [1,null,2]
Output: 2
```

## Constraints

- Number of nodes is in the range `[0, 10^4]`.
- `-100 <= Node.val <= 100`

## Approach

Use recursion. An empty tree has depth `0`. For a non-empty node, calculate
the left and right subtree depths, take the larger one, and add `1` for the
current node.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
