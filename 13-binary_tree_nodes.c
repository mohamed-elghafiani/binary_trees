#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: the number of nodes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		nodes++;
	}
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
