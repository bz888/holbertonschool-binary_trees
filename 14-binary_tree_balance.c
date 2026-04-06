#include "binary_trees.h"
#include <stddef.h>

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

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		height = left;
	else
		height = right;

	return (height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a node
 * @tree: pointer to the node to measure
 * Return: balance factor, height of left - right
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);

	balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (balance);
}

