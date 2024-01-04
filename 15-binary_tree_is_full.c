#include "binary_trees.h"
/**
 * binary_tree_is_full - tree is full
 * @tree: the tree
 * Return: 1 if tree is full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t a = 1;

	if (tree == NULL)
	{
		return (0);
	}
	if (!(tree->right) && !(tree->left))
	{
		return (1);
	}
	else if (!(tree->right) || !(tree->left))
	{
		return (0);
	}
	if ((tree->right))
	{
		a &= binary_tree_is_full(tree->right); 
	}
	if ((tree->left))
	{
		a &= binary_tree_is_full(tree->left);
	}
	return (a);
}
