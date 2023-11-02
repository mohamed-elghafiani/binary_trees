#include <stdlib.h>
#include "binary_trees.h"

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
	if (tree->left)
	{
		left_h = 1 + binary_tree_balance(tree->left);
	}
	if (tree->right)
	{
		right_h = 1 + binary_tree_balance(tree->right);
	}
	return (left_h - right_h);
}
