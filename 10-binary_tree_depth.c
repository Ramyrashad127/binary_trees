#include "binary_trees.h"
/**
 * binary_tree_depth - depth
 * @tree: root
 * Return: int
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t num = 0;
	binary_tree_t *node = tree;

	while (node->parent)
	{
		num++;
		node = node->parent;
	}
	return (num);
}
