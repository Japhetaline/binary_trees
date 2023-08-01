#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree in post-order,
 * starting from the root node and calls the
 * specified function on each node's data.
 * @tree: A constant pointer to the root node of the binary tree.
 * @func: The function to be invoked on each node's data during traversal.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
