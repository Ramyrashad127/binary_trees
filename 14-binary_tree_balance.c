#include "binary_trees.h"
/**
 * binary_tree_height - tree hight
 * @tree: the tree
 * Return: Hight of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t a = 0;
	size_t b = 0;

	if (tree->right)
	{
		a = binary_tree_height(tree->right);
		a += 1;
	}
	else
	{
		a = 0;
	}
	if (tree->left)
	{
		b = binary_tree_height(tree->left);
		b += 1;
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
/**
 * binary_tree_balance - balance
 * @tree: node
 * Return: factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	size_t le = binary_tree_height(tree->left), ri = binary_tree_height(tree->right);
	return (le - ri);
}
