#include "binary_trees.h"


/**
 * binary_tree_insert_left - This function inserts a new
 * node as the left-child of a given parent node.
 * @parent: A pointer to the parent node where the
 * left-child node will be inserted.
 * @value: The value to be stored in the new node.
 * Return: A pointer to the newly created node
 * if successful, otherwise returns NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		child_node->left = parent->left;
		child_node->left->parent = child_node;
	}
	parent->left = child_node;
	return (child_node);
}
