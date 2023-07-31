#include "binary_trees.h"


/**
 * binary_tree_insert_right - This function inserts a new
 * node as the right-child of a given parent node.
 * @parent: A pointer to the parent node where the
 * right-child node will be inserted.
 * @value: The value to be stored in the new node.
 * Return: A pointer to the newly created node
 * if successful, otherwise returns NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child_node = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	child_node = malloc(sizeof(binary_tree_t));
	if (child_node == NULL)
		return (NULL);

	child_node->n = value;
	child_node->parent = parent;
	child_node->left = NULL;
	child_node->right = NULL;

	if (parent->right != NULL)
	{
		child_node->right = parent->right;
		child_node->right->parent = child_node;
	}
	parent->right = child_node;
	return (child_node);
}
