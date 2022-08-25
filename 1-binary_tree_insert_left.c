#include "binary_trees.h"

/**
 * @parent: tree node with a pointer to new_node
 * @value: value to store in the new node
 * @binary_tree_insert_left: insert a node as a left child of another node
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node;

        if (!parent)
                return (NULL);

        new = malloc(sizeof(binary_tree_t));
        if (!new_node)
                return (NULL);

        new_node->n = value;
        new_node->parent = parent;
        new_node->right = NULL;
        new_node->left = parent->left;
        parent->left = new;
        if (new_node->left)
                new->left->parent = new_node;
        return (new_node);
}