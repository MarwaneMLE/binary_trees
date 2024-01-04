#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: If tree is NULL, the function must return 0
 * Return: A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	count = 0;
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
