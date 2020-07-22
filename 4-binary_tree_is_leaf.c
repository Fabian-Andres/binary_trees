#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to see if is leaf
 *
 * @node: node to compare if is root
 * Return: 1 if success or 0 if fail
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);

	return (0);

}
