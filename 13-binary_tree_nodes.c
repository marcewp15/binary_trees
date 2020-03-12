#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * A Null pointer is not a leave
 *
 * @tree: is a pointer to the root node
 * of the tree to count the number of nodes
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int leave_left = 0;
	int leave_right = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (0);
		}
		else
		{
			leave_left = binary_tree_nodes(tree->left);
			leave_right = binary_tree_nodes(tree->right);
			return (leave_left + 1 + leave_right);
		}
	}
	return (0);
}
