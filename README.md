# Binary Trees & Binary Search Trees in C

![ALX SE](https://img.shields.io/badge/ALX-Software_Engineering-red?style=flat-square)
![C](https://img.shields.io/badge/C-gnu89-00599C?style=flat-square&logo=c)
![Data Structures](https://img.shields.io/badge/Focus-Tree_Data_Structures-green?style=flat-square)
![Betty](https://img.shields.io/badge/Betty-Compliant-brightgreen?style=flat-square)

This repository contains C implementations of **Binary Tree** and **Binary Search Tree (BST)** data structures and traversal algorithms, completed as part of the **ALX Software Engineering Program**.

---

## Basic Node Structure (`binary_trees.h`)

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

---

## Function Reference & Task Mapping

| File | Function | Description |
| :--- | :--- | :--- |
| `0-binary_tree_node.c` | `binary_tree_node` | Creates a new binary tree node. |
| `1-binary_tree_insert_left.c` | `binary_tree_insert_left` | Inserts a node as the left-child of another node. |
| `2-binary_tree_insert_right.c` | `binary_tree_insert_right` | Inserts a node as the right-child of another node. |
| `3-binary_tree_delete.c` | `binary_tree_delete` | Recursively deletes an entire binary tree. |
| `4-binary_tree_is_leaf.c` | `binary_tree_is_leaf` | Checks if a given node is a leaf (no children). |
| `5-binary_tree_is_root.c` | `binary_tree_is_root` | Checks if a given node is the root (no parent). |
| `6-binary_tree_preorder.c` | `binary_tree_preorder` | Traverses tree using **Pre-order** traversal (Root, Left, Right). |
| `7-binary_tree_inorder.c` | `binary_tree_inorder` | Traverses tree using **In-order** traversal (Left, Root, Right). |
| `8-binary_tree_postorder.c` | `binary_tree_postorder` | Traverses tree using **Post-order** traversal (Left, Right, Root). |
| `9-binary_tree_height.c` | `binary_tree_height` | Measures the height of a binary tree. |
| `10-binary_tree_depth.c` | `binary_tree_depth` | Measures the depth of a specific node from the root. |
| `11-binary_tree_size.c` | `binary_tree_size` | Measures the total number of nodes in a binary tree. |
| `12-binary_tree_leaves.c` | `binary_tree_leaves` | Counts all leaf nodes in a binary tree. |
| `13-binary_tree_nodes.c` | `binary_tree_nodes` | Counts nodes with at least 1 child. |
| `14-binary_tree_balance.c` | `binary_tree_balance` | Measures the balance factor of a binary tree (`height(left) - height(right)`). |
| `15-binary_tree_is_full.c` | `binary_tree_is_full` | Checks if a binary tree is full (every node has 0 or 2 children). |
| `16-binary_tree_is_perfect.c` | `binary_tree_is_perfect` | Checks if a binary tree is perfect (all internal nodes have 2 children, leaves at same level). |
| `17-binary_tree_sibling.c` | `binary_tree_sibling` | Finds the sibling of a node. |
| `18-binary_tree_uncle.c` | `binary_tree_uncle` | Finds the uncle of a node. |

---

## Compilation & Testing

Compile any task using `gcc` with the provided `binary_tree_print.c` visualizer:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-binary_tree_node.c binary_tree_print.c -o 0-node
./0-node
```

### Visual Output
```
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
```

---

## Authors
- **Ramy Rashad** - [GitHub](https://github.com/Ramyrashad127)
- **Ahmed El Gendy** - [GitHub](https://github.com/Ahmed-El-Gendy)
