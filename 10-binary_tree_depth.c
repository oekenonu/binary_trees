#include "binary_trees.h"

/**
 * binary_tree_depth - Check depth of node in the binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: If NULL - 0
 *         Otherwise - depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
