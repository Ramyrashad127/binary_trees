#include "binary_trees.h"

/**
 * binary_tree_node - insert left
 * @parent: pointer
 * @value: int
 * Return: node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);
	binary_tree_t *new;
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if (!(parent->left))
	{
		parent->left = new;
		new->parent = parent;
	}
	else
	{
		new->left = parent->left;
		new->left->parent = new;
		parent->left = new;
	}
	return (new);
}
