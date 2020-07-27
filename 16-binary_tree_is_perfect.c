#include "binary_trees.h"

/**
 * height_tree - obtain the height tree
 *
 * @tree: binary tree
 * @pointer_h: pointer to height variable
 * @value: height of current
 */

void height_tree(const binary_tree_t *tree, int *pointer_h, int value)
{
	if (*pointer_h < value)
		*pointer_h = value;

	if (tree->left != NULL)
		height_tree(tree->left, pointer_h, value + 1);

	if (tree->right != NULL)
		height_tree(tree->right, pointer_h, value + 1);
}

/**
 * size_count - get the size of a binary tree
 *
 * @tree: binary tree
 * @pointer_size: pointer to size
 */

void size_count(const binary_tree_t *tree, int *pointer_size)
{
	*pointer_size += 1;

	if (tree->left != NULL)
		size_count(tree->left, pointer_size);

	if (tree->right != NULL)
		size_count(tree->right, pointer_size);
}

/**
 * _pow - function to calculate base ** exp
 * @base: base
 * @exp: exp
 * Return: base ** exp
 */

int _pow(int base, int exp)
{
	int result = 1;
	int i = 0;

	for (i = 0; i < exp; i++)
		result *= base;

	return (result);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: binary tree
 *
 * Return: 1 if the tree is perfect or 0 if false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;
	int size = 0;
	int temporal = 0;

	if (tree == NULL)
		return (0);

	height_tree(tree, &height, 0);
	size_count(tree, &size);

	temporal = _pow(2, height + 1) - 1;
	if (temporal == size)
		return (1);
	else
		return (0);
}
