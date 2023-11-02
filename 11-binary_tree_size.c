#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size -  measures the size of a binary tree
 *
 * @tree: pointer to the tree
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsize, rsize;

	if (!tree)
	{
		return (0);
	}
	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);
	return (lsize + rsize + 1);
}
