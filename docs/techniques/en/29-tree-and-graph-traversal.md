# 29 - Tree And Graph Traversal

[Previous](28-recursion-and-backtracking.md) | [Contents](README.md) | [Turkce](../tr/29-tree-and-graph-traversal.md) | [Next](30-dynamic-programming-and-kadane.md)

## Mental Model

Traversal defines the order and state used to reach nodes. DFS completes one path
deeply; BFS processes nodes by edge distance from the start. Choose according to
the information required, not preferred syntax.

A tree has no cycle through child links. A general graph can reach one node through
many paths, so it usually needs visited state.

## DFS Contract

`dfs(node)` produces the answer for the substructure rooted at that node.

```c
int depth(struct TreeNode *node) {
    if (node == NULL) return 0;
    int left = depth(node->left);
    int right = depth(node->right);
    return 1 + (left > right ? left : right);
}
```

## BFS Invariant

The queue holds discovered nodes whose neighbors are not yet processed, in layer
order. In an unweighted graph, first discovery gives shortest edge distance. Mark
visited on enqueue to avoid adding the same node repeatedly.

## Representation Choice

Adjacency lists use O(V + E) space for sparse graphs; matrices use O(V^2) for dense
graphs. Grid neighbors can be generated from direction arrays.

## C Risks

Bound visited and queue storage, consider recursive depth, and define node ownership.
Tree traversal copied to a graph without visited state can loop forever.

## Practice In This Repository

[104 - Maximum Depth](../../../problems/0104-maximum-depth-of-binary-tree/README.md) and [226 - Invert Binary Tree](../../../problems/0226-invert-binary-tree/README.md) build tree DFS basics. [661 - Image Smoother](../../../problems/0661-image-smoother/README.md) develops grid-neighbor traversal.

## Systems Bridge

Dependency graphs, device topology, and connected-component image analysis require
traversal with bounded queue or stack capacity.

