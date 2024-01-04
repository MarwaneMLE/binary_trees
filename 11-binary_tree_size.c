#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 * Return: The size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* Recursively get the size of the left subtree */
	left_size = binary_tree_size(tree->left);

	/* Recursively get the size of the right subtree */
	right_size = binary_tree_size(tree->right);

	/**
	 * Return the total size, which is the sum of left and right
	 * subtrees + 1 for the current node
	 */
	return (left_size + right_size + 1);
}
