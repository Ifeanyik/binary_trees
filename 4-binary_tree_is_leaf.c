#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - checks if given node is a leaf
 * @node: pointer to node to be checked
 * Return: 1 or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
