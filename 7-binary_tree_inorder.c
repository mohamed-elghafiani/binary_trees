#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse the binary tree in inorder traversal
 *
 * @tree: a pointer to the binary tree to traverse
 * @func: a pointer to a funcion that takes an int (value of the visited node)
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
