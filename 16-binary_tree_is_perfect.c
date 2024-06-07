#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - measures height
 * @tree: pointer to the root node
 *
 * Return: height of tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	else
	{
		left_height = 0;
	}
	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}
	else
	{
		right_height = 0;
	}
	if (left_height > right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}

/**
 * binary_tree_size - size of binary tree
 * @tree: pointer to the root node
 *
 * Return: size of the binary tree, or 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;

	left_size = 0;
	right_size = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left_size = binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
	{
		right_size = binary_tree_size(tree->right);
	}
	return (1 + left_size + right_size);
}
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to the root
 *
 * Return: 1, or 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t size;
	size_t nodes;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	nodes = (1 << height) - 1;
	return (size == nodes);
}
