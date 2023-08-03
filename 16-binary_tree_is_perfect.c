#include "binary_trees.h"

/**
 * binary_tree_is_perfect - A function that determines whether a
 * binary tree is perfect.
 * @tree: A pointer to the root of the binary tree.
 * Return: 1 if the binary tree is perfect, otherwise return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((binary_tree_is_full(tree) == 1) &&
			(binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - A function that checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree.
 * Return: 1 if tree is full or 0 in otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);
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

	if (tree->left)
		sinister_size += 1 + binary_tree_height(tree->left);
	if (tree->right)
		dexter_size += 1 + binary_tree_height(tree->right);

	if (sinister_size > dexter_size)
		return (sinister_size);
	else
		return (dexter_size);
}

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
