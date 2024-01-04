#include "binary_trees.h"
/**
 * binary_tree_leaves - tree leaves
 * @tree: the tree
 * Return: Num of the tree's leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t a = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->right) == NULL && (tree->left) == NULL)
	{
		return (1);
	}
	a += binary_tree_leaves(tree->right);
	a += binary_tree_leaves(tree->left);
	return (a);
}
