#include "binary_trees.h"

/**
 * counter_l - function for leaves of tree
 *
 * @tree: tree to measure
 * @pointer_t: pointer to leaf
 */
void counter_l(const binary_tree_t *tree, size_t *pointer_t)
{
	if (tree->left == NULL && tree->right == NULL)
		*pointer_t += 1;

	if (tree->left != NULL)
		counter_l(tree->left, pointer_t);

	if (tree->right != NULL)
		counter_l(tree->right, pointer_t);
}

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: tree to measure
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree == NULL)
		return (0);

	counter_l(tree, &total);

	return (total);
}
