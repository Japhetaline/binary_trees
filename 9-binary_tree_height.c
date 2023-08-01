#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: root node to draw height from for tree
 * Return: size_t representing height, 0 on failure or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t sinister_size = 0;
	size_t dexter_size = 0;

	if (tree->left)
		sinister_size += 1 + binary_tree_height(tree->left);
	if (tree->right)
		dexter_size += 1 + binary_tree_height(tree->right);

	if (sinister_size > dexter_size)
		return (sinister_size);
	else
		return (dexter_size);
}
