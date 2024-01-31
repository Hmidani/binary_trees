#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node
 * as the right-child of another node
 * @parent: A pointer to the node.
 * @value: The value to store of new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
