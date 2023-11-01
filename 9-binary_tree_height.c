#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_height - return the height of the binary tree
 *
 * @tree: a pointer to the tree
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;

	if (!tree)
	{
		return (h);
	}
	while (tree->left || tree->right)
	{
		h++;
		tree = tree->left ? tree->left : tree->right;
	}
	return (h);
}
