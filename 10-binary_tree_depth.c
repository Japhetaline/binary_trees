#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node in a binary tree
 * @tree: The root node from which to calculate the depth
 * Return: A size_t value representing the depth of the node,
 * 0 on failure or if the tree is empty (NULL)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);
	return (depth);
}
