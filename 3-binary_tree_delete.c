#include "binary_trees.h"
/**
 * binary_tree_delete - delete
 * @tree: the tree
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->right)
		free(tree->right);
	if (tree->left)
		free(tree->left);
	free(tree);
}
