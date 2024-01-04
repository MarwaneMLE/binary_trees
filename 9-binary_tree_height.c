#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* Recursively get the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Recursively get the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
