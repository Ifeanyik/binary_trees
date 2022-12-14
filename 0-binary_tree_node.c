#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - adds a node to a binary tree
 * @parent: pointer to parent node
 * @value: value of node to be added
 * Return: pointer to new_node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}
