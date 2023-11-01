#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse the binary tree in preorder traversal
 *
 * @tree: a pointer to the binary tree to traverse
 * @func: a pointer to a funcion that takes an int (value of the visited node)
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
