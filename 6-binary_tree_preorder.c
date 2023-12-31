#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a tree with a preorder calling func.
 * @tree: constant pointer to root node
 * @func: function to call on tree node's data
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
