#include "binary_trees.h"

/**
 * binary_tree_inorder - is used to traverse a binary tree
 * in an in-order manner, starting from the root node and calling
 * a specified function on each node's data.
 * @tree: A constant pointer to the root node of the binary tree
 * from where the traversal begins.
 * @func: A function that will be invoked on the data of each node
 * during the traversal.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
