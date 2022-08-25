#include "binary_trees.h"

/**
 * preorder - recursive function to func nodes
 * @control: pointer to node to start from
 * @func: pointer to function func
 * Return: none
 */

/*void preorder(binary_tree_t *control, void (*func)(int))
{
	func(control->n);
	while (control->left)
	{
		func(control->left->n);
		if (control->right)
			preorder(control->right, func);
		control = control->left;
	}
	if (control->right)
		preorder(control->right, func);
}*/

/**
 * binary_tree_preorder - main function to move through binary tree
 * @tree: root node
 * @func: pointer to function func
 * Return: none
 */

/*void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	if (tree->left)
		preorder(tree->left, func);
	if (tree->right)
		preorder(tree->right, func);
}*/
