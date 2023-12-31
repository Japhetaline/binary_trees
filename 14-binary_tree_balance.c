#include "binary_trees.h"

/**
 * binary_tree_balance - A function that measures the balance
 * factor of a binary tree.
 * @tree: Pointer to root node to calculate balance factor.
 * Return: The balance factor of the tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t sinister_height = 0, dexter_height = 0;

	if (!tree)
		return (0);

	sinister_height = binary_tree_height(tree->left);
	dexter_height = binary_tree_height(tree->right);
	return (sinister_height - dexter_height);
}

/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: root node to draw height from for tree
 * Return: size_t representing height, 0 on failure or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t sinister_size = 0;
	size_t dexter_size = 0;

	if (!tree)
		return (0);

	sinister_size += 1 + binary_tree_height(tree->left);
	dexter_size += 1 + binary_tree_height(tree->right);
	if (sinister_size > dexter_size)
		return (sinister_size);

	return (dexter_size);
}
