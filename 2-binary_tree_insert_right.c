#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to create tree node left
 *
 * @parent: node parent
 * @value: value to add
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node, *tmp_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (value == parent->n)
		return (NULL);

	if (parent->right != NULL)
	{
		tmp_node = parent->right;
		tmp_node->parent = new_node;
		new_node->right = tmp_node;
	}

	parent->right = new_node;

	return (new_node);
}
