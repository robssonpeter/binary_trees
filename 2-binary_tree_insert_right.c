#include "binary_trees.h"
/*
 * binary_tree_insert_right - the function
 * @parent: Pointer to the parent
 * @value: integer of what is to be set
 * Description: The function to add to the right child
 * return: pointer to a binary tree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);
	binary_tree_t *old_right = parent->right;

	if (old_right)
	{
		old_right->parent = node;
		node->right = old_right;
	}

	parent->right = node;

	return (node);
}
