#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary is full
 * @tree: pointer to the root node
 *
 * Return: 1 or 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL && tree->right != NULL) ||
	    (tree->left != NULL && tree->right == NULL))
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
