#include "binary_trees.h"

/**
 * tree_is_full - function to know if the tree is full
 *
 * @tree: binary tree
 * @full: check if the tree is full
 */
void tree_is_full(const binary_tree_t *tree, int *full)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL && tree->right == NULL)
	{
		*full = 0;
		return;
	}
	else if (tree->left == NULL && tree->right != NULL)
	{
		*full = 0;
		return;
	}

	if (tree->left)
		tree_is_full(tree->left, full);
	if (tree->right)
		tree_is_full(tree->right, full);
}

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: binary tree
 *
 * Return: 1 if is full or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 1;

	if (tree == NULL)
		return (0);

	tree_is_full(tree, &full);

	return (full);
}
