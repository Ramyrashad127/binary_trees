#include "binary_trees.h"
/**
 * binary_tree_height - tree hight
 * @tree: the tree
 * Return: Hight of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	size_t a = binary_tree_height(tree->right), b = binary_tree_height(tree->left);
	if (a > b)
		return (a);
	else
		return (b);
}
