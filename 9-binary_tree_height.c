#include "binary_trees.h"
/**
 * binary_tree_height - tree hight
 * @tree: the tree
 * Return: Hight of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a = 0;
	size_t b = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right)
	{
		a = 1 + binary_tree_height(tree->right);
	}
	else
	{
		a = 0;
	}
	if (tree->left)
	{
		b = 1 + binary_tree_height(tree->left);
	}
	else
	{
		b = 0;
	}
	if (a > b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}
