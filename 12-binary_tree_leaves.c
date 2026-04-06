#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_leaves - find number of leaf nodes
 * @tree: pointer to root node
 * Return: num of leaf nodes in tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += binary_tree_leaves(tree->left);
	size += binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		size++;

	return (size);
}

