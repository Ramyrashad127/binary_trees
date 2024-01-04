#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Check if binary tree is prefect
 * @tree: root
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (!(binary_tree_is_full(tree)))
	{
		return (0);
	}
	if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
	{
		return (1);
	}
	return (0);
}

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
