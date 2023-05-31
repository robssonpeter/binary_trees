#include "binary_trees.h"

/*
 * binary_tree_is_leaf - the function
 * @node: pointer to a tree node
 * Description: checks if the node is the last
 * return: integer
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	return (0);
}
