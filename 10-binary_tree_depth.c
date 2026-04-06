#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - find depth of binary tree
 * @tree: pointer to the node to measure depth
 * Return: height of a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}

