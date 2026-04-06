#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to root node
 * Return: num of node with at least 1 child node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += binary_tree_nodes(tree->left);
	size += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		size++;

	return (size);
}

