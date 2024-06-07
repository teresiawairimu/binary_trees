#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 * @node: pointer to the node
 *
 * Return: pointer to the sibling node
 * NULL if node is NULL, parent is NULL of no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - finds the uncle of the node
 * @node: pointer to find the uncle
 *
 * Return: pointer to the uncle node
 * NULL if node is NULL or if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	return (binary_tree_sibling(node->parent));
}
