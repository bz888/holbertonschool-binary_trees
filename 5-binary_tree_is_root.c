#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - check if node is a root node
 * @node: pointer to node being checked
 * Return: 1 if true, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);

	return (1);
}

