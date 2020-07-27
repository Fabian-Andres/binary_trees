#include "binary_trees.h"

/**
 * height_tree - obtain the height tree
 *
 * @tree: binary tree
 * @pointer_h: height pointer
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
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 *
 * @tree: binary tree
 *
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left = 0;
	int h_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		h_left++;
		height_tree(tree->left, &h_left, 1);
	}
	if (tree->right)
	{
		h_right++;
		height_tree(tree->right, &h_right, 1);
	}

	return (h_left - h_right);
}
