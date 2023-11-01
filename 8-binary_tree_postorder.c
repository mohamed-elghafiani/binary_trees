#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse the binary tree in postorder traversal
 *
 * @tree: a pointer to the binary tree to traverse
 * @func: a pointer to a funcion that takes an int (value of the visited node)
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
