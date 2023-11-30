#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts node to a left-child.
 * @parent: A pointer parent of left-child.
 * @value: Value to store in the new left node.
 *
 * Return: NULL if an error occurs.
 *         Otherwise - pointer to the new node..
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = binary_tree_node(parent, value);
	if (new == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
