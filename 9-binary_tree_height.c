#include "binary_trees.h"


/**
 * counter_h - function to couunt height tree.
 *
 * @tree: tree to measure
 * @pointer_h: pointer to height
 * @value: counter value
 */


void counter_h(const binary_tree_t *tree, size_t *pointer_h, size_t value)
{
	if (*pointer_h < value)
		*pointer_h = value;

	if (tree->left != NULL)
		counter_h(tree->left, pointer_h, value + 1);

	if (tree->right != NULL)
		counter_h(tree->right, pointer_h, value + 1);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: tree to measure
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_tree = 0;

	if (tree == NULL)
		return (0);

	counter_h(tree, &height_tree, 0);

	return (height_tree);
}
