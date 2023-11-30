#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node to the right-child
 * @parent: Pointer to parent of right-child.
 * @value: Value to store in the new node.
 *
 * Return: NULL if an error occurs
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
