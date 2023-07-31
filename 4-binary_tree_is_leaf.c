#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that determines
 * whether a node is a leaf or not
 * @node: a node in a binary tree
 * Return: 1 if the node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
