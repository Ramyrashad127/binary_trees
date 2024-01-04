#include "binary_trees.h"
/**
 * binary_tree_uncle - new
 * @node: new
 * Return: node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *new, *temp;

	if (!node)
		return (NULL);
	new = node->parent;
	if (!new)
		return (NULL);
	temp = new->parent;
	if (!temp)
		return (NULL);
	if (temp->left == new)
	{
		if (temp->right)
			return (temp->right);
		else
			return (NULL);
	}
	else
	{
		if (temp->left)
			return (temp->left);
		else
			return (NULL);
	}
}
