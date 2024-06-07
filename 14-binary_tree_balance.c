#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to the root node to measure the balance factor
 *
 * Return: the balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		left_height = (int)binary_tree_height(tree->left);
	}
	else
	{
		left_height = -1;
	}
	if (tree->right != NULL)
	{
		right_height = (int)binary_tree_height(tree->right);
	}
	else
	{
		right_height = -1;
	}
	return (left_height - right_height);
}
