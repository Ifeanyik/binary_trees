#include "binary_trees.h"

/**
 * leaf_counter - recursively counts the number of nodes
 * @node: pointer to node to be checked
 * Return: number of leaves found
 */

size_t leaf_counter(binary_tree_t *node)
{
        size_t number = 0;

        if (!node->left && !node->right)
        {
                number++;
                return (number);
        }
        if (node->left)
                number = leaf_counter(node->left);
        if (node->right)
                number += leaf_counter(node->right);
        return (number);
}

/**
 * binary_tree_leaves - finds the number of leaves in binary tree
 * @tree: pointer to the root node
 * Return: number of leaves in a tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (leaves);
	if (!tree->left && !tree->right)
	{
		leaves++;
		return (leaves);
	}
	if (tree->left)
		leaves = leaf_counter(tree->left);
	if (tree->right)
		leaves += leaf_counter(tree->right);
	return (leaves);
}
