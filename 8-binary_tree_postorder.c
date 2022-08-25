#include "binary_trees.h"

/**
 * recursor_postorder - recursive function
 * @control: beginnning of the subtree
 * @func: function that prints node value
 * Return: void
 */
void recursor_postorder(binary_tree_t *control, void (*func)(int))
{
	if (control->left)
		recursor_postorder(control->left, func);
	if (control->right)
		recursor_postorder(control->right, func);
	func(control->n);
}

/**
 * binary_tree_postorder - traverses binary tree in postorder fashion
 * @tree: node to start with
 * @func: function that prints node value
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
		recursor_postorder(tree->left, func);
	if (tree->right)
		recursor_postorder(tree->right, func);
	func(tree->n);
}
