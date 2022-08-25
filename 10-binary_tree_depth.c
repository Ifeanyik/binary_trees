#include "binary_trees.h"

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
