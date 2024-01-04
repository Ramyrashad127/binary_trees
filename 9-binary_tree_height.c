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

	size_t a, b;

	if (tree->right)
		a = binary_tree_height(tree->right) + 1;
	else
		a = 0;
	if (tree->left)
		b = binary_tree_height(tree->left) + 1;
	else
		b = 0;

	if (a > b)
		return (a);

	else
		return (b);
}
