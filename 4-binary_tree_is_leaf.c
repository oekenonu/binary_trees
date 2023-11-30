#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf of the binary tree.
 * @node: Pointer to the node to be checked.
 *
 * Return: If node is leaf - 1.
 *         Otherwise - 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);

	return (1);
}
