#include "binary_trees.h"

/**
 * binary_tree_node - function to create tree node
 *
 * @parent: node parent
 * @value: value to add
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

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

	else if (value < parent->n)
	{
		if (parent->left)
		{
			free(new_node);
			return (NULL);
		}
		parent->left = new_node;
	}

	else if  (value > parent->n)
	{
		if (parent->right)
		{
			free(new_node);
			return (NULL);
		}
		parent->right = new_node;
	}

	return (new_node);
}
