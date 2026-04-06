#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - find height of binary tree
 * @tree: pointer to the root node
 * Return: height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right, height;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		height = left;
	else
		height = right;

	return (height + 1);
}

