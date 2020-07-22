#include "binary_trees.h"

/**
 * binary_tree_is_root - function to see what is root
 *
 * @node: node to compare if is root
 * Return: 1 if success or 0 if fail
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
