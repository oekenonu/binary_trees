#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to function to call the node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
