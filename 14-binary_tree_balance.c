#include "binary_trees.h"

/**
 * caller - recursively calculates height
 * @control: node to start recursion from
 * @height: current tree height
 * Return: maximum height
 */

int caller(binary_tree_t *control, int height)
{
	int left_height = 0, right_height = 0;
	height += 1;

	if (control->left)
		left_height = caller(control->left, height);
	if (control->right)
		right_height = caller(control->right, height);
	if (left_height == 0 && right_height == 0)
		return (height);
	if (left_height > right_height)
		return (left_height);
	return (right_height);
}

/**
 * binary_tree_balance - calculates balance factor of a binary tree
 * @tree: node to start calculation from
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height = 0, right_height = 0, left_height = 0;

	if (!tree)
		return (height);
	height += 1;
	if (tree->left)
		left_height = caller(tree->left, height);
	if (tree->right)
		right_height = caller(tree->right, height);
	if (!tree->left)
		left_height = height;
	if (!tree->right)
		right_height = height;
	return (left_height - right_height);
}
