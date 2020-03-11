#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return: return a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	int aux;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node != NULL)
	{
		if (parent->right != NULL)
		{
			aux = parent->right->n;
			parent->right->n = value;
			parent->right->right = new_node;
			new_node->n = aux;
			new_node->parent = parent->right;
			return (new_node);
		}

		parent->right = new_node;
		return (new_node);
	}
	return (NULL);
}
