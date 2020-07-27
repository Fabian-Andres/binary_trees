#include "binary_trees.h"

/**
 * parent_nodes - obtain the number of parent nodes
 *
 * @tree: binary tree
 * @pointer_nodes: pointer of count nodes
*/

void parent_nodes(const binary_tree_t *tree, size_t *pointer_nodes)
{

	if (tree->left != NULL || tree->right != NULL)
		*pointer_nodes += 1;

	if (tree->left != NULL)
		parent_nodes(tree->left, pointer_nodes);

	if (tree->right != NULL)
		parent_nodes(tree->right, pointer_nodes);
}

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: binary tree
 *
 * Return: returns the number of parent nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	parent_nodes(tree, &nodes);

	return (nodes);
}
