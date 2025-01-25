# Binary Tree

A **Binary Tree** is a hierarchical data structure in which each node has at most two children, referred to as the **left child** and **right child**.

## Key Concepts

1. **Node**: Basic unit of a binary tree containing data.
2. **Root**: The topmost node of the tree.
3. **Children**: Nodes directly connected to a node.
4. **Leaf Node**: A node with no children.
5. **Height**: The number of edges on the longest path from the root to a leaf.

## Types of Binary Trees

1. **Full Binary Tree**: Every node has 0 or 2 children.
2. **Complete Binary Tree**: All levels are fully filled except possibly the last, which is filled from left to right.
3. **Perfect Binary Tree**: All internal nodes have 2 children, and all leaf nodes are at the same level.
4. **Binary Search Tree (BST)**: A binary tree where the left child contains smaller values and the right child contains larger values.

## Basic Operations

1. **Insertion**: Add a node to the tree.
2. **Traversal**:
   - **Inorder**: Left → Root → Right
   - **Preorder**: Root → Left → Right
   - **Postorder**: Left → Right → Root
   - **Level Order**: Level by level.
3. **Search**: Find a node in the tree.

## Example

A binary tree with root `1`, left child `2`, and right child `3`:

```
    1
   / \
  2   3
```

Binary trees are widely used in algorithms, databases, and file systems.
