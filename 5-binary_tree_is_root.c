#include "binary_trees.h"

/**
 * binary_tree_is_root - This function checks if a given node is a
 * root in a binary tree.
 * @node: A pointer to the node to be checked.
 * Return: 1 if the node is a root, otherwise 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
