#include "binary_trees.h"

binary_tree_t *sibling(binary_tree_t *node);

/**
 * binary_tree_uncle - This function navigates through a
 * binary tree to find the uncle of a given node.
 * @node: The node for which we want to find the uncle.
 * Return: A pointer to the uncle node, if found.
 * If the uncle is not present
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return sibling(node->parent);
}

/**
 * binary_tree_sibling - A function that finds the sibling of a node.
 * @node: The node to find sibling for.
 * Return: A pointer to sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
