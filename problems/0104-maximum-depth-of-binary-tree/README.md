# #0104 - Maximum Depth of Binary Tree

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Tree, Depth-First Search, Breadth-First Search, Binary Tree
- Hint: The depth of a node is one plus the deeper depth of its children.
- Solved date: 2026-05-26
- Source: LeetCode #104

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
