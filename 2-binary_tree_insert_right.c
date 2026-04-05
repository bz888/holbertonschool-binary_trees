#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts node to right in binary tree
 * @parent: pointer to the parent node
 * @value: value to store in the node
 *
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}

