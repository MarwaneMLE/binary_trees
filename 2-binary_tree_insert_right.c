#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	
	new_node = NULL;
	/*Check for NULL parent and value*/
	if (parent == NULL || value == '\0')
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	/* Initialize the new node*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	
	/* If parent has a right child, adjust pointers */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}

	/* Set the new node as the right child of the parent */
	parent->right = new_node;
	return (new_node);
}
