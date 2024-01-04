#include "binary_trees.h"

/**
 * binary_tree_node - make node
 * @parent: pointer
 * @value: int
 * Return: node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	return (new);
}
