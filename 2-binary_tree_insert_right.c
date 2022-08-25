#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert right child in binary tree node
 * @parent: Pointer to parent node
 * @value: value of node to be added
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_right_child;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;
	if (!parent)
		return (new_node);
	if (!parent->right)
	{
		parent->right = new_node;
		new_node->parent = parent;
		return (new_node);
	}
	old_right_child = parent->right;
	parent->right = new_node;
	new_node->parent = parent;
	new_node->right = old_right_child;
	old_right_child->parent = new_node;
	return (new_node);
}
