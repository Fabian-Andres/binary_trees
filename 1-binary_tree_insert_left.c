#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to create tree node left
 *
 * @parent: node parent
 * @value: value to add
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node, *tmp_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent == NULL)
		return (new_node);

	else if (value == parent->n)
		return (NULL);

	if (parent->left != NULL)
	{
		tmp_node = parent->left;
		tmp_node->parent = new_node;
		new_node->left = tmp_node;
	}

	parent->left = new_node;

	return (new_node);
}
