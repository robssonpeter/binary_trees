#include "binary_trees.h"
/*
 * binary_tree_is_root - the function
 * @node: Pointer to a tree node
 * Description: checks whethere the node is the root
 * return: interger 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
