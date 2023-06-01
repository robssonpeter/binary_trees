#include "binary_trees.h"
/*
 * binary_tree_sibling - the function
 * @node: the node to be examined
 * Description: checks to find the sibling of a node
 * return: pointer to a node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
