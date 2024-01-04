#include "binary_tree.h"
/**
 * binary_tree_sibling - new
 * @node: new
 * Return: node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *new = node;

	if (!node)
		return (NULL);
	new = node->parent;
	if (!new)
		return (NULL);
	if (new->left == node)
	{
		if (new->right == NULL)
			return (NULL);
		else
			return (new->right);
	}
	else
	{
		if (new->left == NULL)
			return (NULL);
		else
			return (new->left);
	}
}
