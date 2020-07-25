#include "binary_trees.h"

/**
 * counter_z - function for obtain the size of a binary tree.
 *
 * @tree: tree to measure
 * @pointer_z: pointer size
 */
void counter_z(const binary_tree_t *tree, size_t *pointer_z)
{
	*pointer_z += 1;

	if (tree->left != NULL)
		counter_z(tree->left, pointer_z);

	if (tree->right != NULL)
		counter_z(tree->right, pointer_z);
}

/**
 * binary_tree_size - function that measures the size of tree
 *
 * @tree: tree to measure
 * Return: returns the size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	counter_z(tree, &size);

	return (size);
}
