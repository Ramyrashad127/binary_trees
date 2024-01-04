#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert left
 * @parent: pointer
 * @value: int
 * Return: node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (!(parent->left))
	{
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}
	return (new);
}
