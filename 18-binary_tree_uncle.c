#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle to a node
 * @node: pointer to nephew
 * Return: pointer to uncle if found
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	parent = node->parent->parent;
	if (!parent)
		return (NULL);
	if (parent->left && parent->left != (node->parent))
		return (parent->left);
	if (parent->right && (parent->right != node->parent))
		return (parent->right);
	return (NULL);
}
