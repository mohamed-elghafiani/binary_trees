#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_height - return the height of the binary tree
 *
 * @tree: a pointer to the tree
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (!tree)
	{
		return (0);
	}

	left_h = tree->left ? (int)binary_tree_height(tree->left) : -1;
	right_h = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (left_h - right_h);
}
