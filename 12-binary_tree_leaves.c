#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * A Null pointer is not a leave
 *
 * @tree: is a pointer to the root node
 * of the tree to count the number of leaves
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leave_left = 0;
	int leave_right = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL)
		{
			return (1);
		}
		else
		{
			leave_left = binary_tree_leaves(tree->left);
			leave_right = binary_tree_leaves(tree->right);
			return (leave_left + leave_right);
		}
	}
	return (0);
}
