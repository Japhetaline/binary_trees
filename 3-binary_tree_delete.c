#include "binary_trees.h"

/**
 * binary_tree_delete - responsible for deleting an entire
 * binary tree represented by the 'tree' parameter.
 * @tree: performs the necessary operations to release all the memory
 * used by the tree, effectively removing all its
 * nodes and freeing up resources.
 * Return: function does not return anything as its purpose
 * is to handle the deletion process and not to produce a result.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
