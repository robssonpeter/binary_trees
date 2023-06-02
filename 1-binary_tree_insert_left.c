#include "binary_trees.h"

/**
 * binary_treee_insert_left  - the function
 *
 * Description: a function to set the left item of a node
 * @parent: Pointer to the parent node
 * @value: value to be set
 * Return: binarty_tree_t variable
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);

	if (parent->left)
	{
		/* store the old left node */
		binary_tree_t *old_left = parent->left;

		old_left->parent = node;
		old_left->left = NULL;
		old_left->right = NULL;
		node->left = old_left;
	}
	else
	{
		node->left = NULL;
	}

	parent->left = node;
	return (node);
}
