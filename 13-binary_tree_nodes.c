#include "binary_trees.h"
/**
 * binary_tree_nodes - tree nodes
 * @tree: the tree
 * Return: Num of the tree's nodes which has at least 1 node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->right) || (tree->left))
	{
		return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
	}
	return (a);
}
