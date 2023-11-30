#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse binary tree using post-order traversal.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->right, func);
		binary_tree_postorder(tree->left, func);
		func(tree->n);
	}
}
