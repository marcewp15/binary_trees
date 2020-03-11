#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	int aux;

	if (parent == NULL)
	return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node != NULL)
	{
		if (parent->left != NULL)
		{
			aux = parent->left->n;
			parent->left->n = value;
			parent->left->left = new_node;
			new_node->n = aux;
			new_node->parent = parent->left;
			return (new_node);
		}

		parent->left = new_node;
		return (new_node);
	}
	return (NULL);
}
