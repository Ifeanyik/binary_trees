#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_depth - calculate the depth of a given node
 * @tree: pointer to a given node
 * Return: magnitude of depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	const binary_tree_t *control;

	depth = 0;
	if (!tree)
		return (depth);
	control = tree;
	while (control->parent)
	{
		depth += 1;
		control = control->parent;
	}
	return (depth);
}

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
		perfect1 = check(control->right, height);
		perfect2 = check(control->left, height);
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
