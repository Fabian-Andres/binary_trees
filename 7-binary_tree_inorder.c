#include "binary_trees.h"

/**
 * binary_tree_inorder - function to sort bynary tree in order
 *
 * @tree: tree to order
 * @func: address function
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_inorder(tree->right, func);

	(*func)(tree->n);

	if (tree->right != NULL)
		binary_tree_inorder(tree->left, func);
}
