#include "binary_trees.h"

/**
 * tree_height - measures height of a tree
 * @tree: pointer to node
 *
 * Return: height
 */
size_t tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL)
		return (1 + tree_height(tree->right));

	if (tree->right == NULL)
		return (1 + tree_height(tree->left));

	return (1 + (tree_height(tree->left) >
		     tree_height(tree->right) ?
		     tree_height(tree->left) :
		     tree_height(tree->right)));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);

	if (left_h != right_h)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}

