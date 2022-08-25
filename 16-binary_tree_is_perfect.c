#include "binary_trees.h"

/**
 * check - finds if a tree is perfect
 * @control: pointer to current node
 * @height: height of the tree
 * Return: 0 or 1
 */

int check(binary_tree_t *control, size_t height)
{
	int perfect1, perfect2;
	size_t depth;

	if (control->left && control->right)
	{
		perfect1 = (control->right, height);
		perfect2 = (control->left, height);
		if (perfect1 && perfect2)
			return (1);
		else
			return (0);
	}
	if (!control->right && !control->left)
	{
		depth = binary_tree_depth(control);
		if (depth == height)
			return (1);
		else
			return (0);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node of tree to check
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	int perfect1, perfect2;

	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		height = binary_tree_height(tree);
		perfect1 = check(tree->left, height);
		perfect2 = check(tree->right, height);
		if (perfect1 == 1 && perfect2 == 1)
			return (1);
		else
			return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
	return (0);
}
