#include "binary_trees.h"
/**
 * binary_tree_size - tree size
 * @tree: the tree
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t a = 1;

	if (tree == NULL)
	{
		return (0);
	}
	a += binary_tree_size(tree->right);
	a += binary_tree_size(tree->left);
	return (a);
}
