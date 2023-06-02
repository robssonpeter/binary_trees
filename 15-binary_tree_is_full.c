#include "binary_trees.h"
int traverse_is_full(binary_tree_t *tree, int *is_full)
{
	if (tree->right == NULL || tree->left == NULL)
		return (0);
	if (*is_full == 0)
		return 0;
	traverse_is_full(tree->left, is_full);
	traverse_is_full(tree->right, is_full);
	return (*is_full);
}
/*
 * binary_tree_is_full - the function
 * @tree: the tree to be checked
 * Description: the function to check if tree is full
 * return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full, *is_full;

	full = 0;

	if (tree->right == NULL || tree->left == NULL)
		return (0);
	is_full = &full;

	traverse_is_full(tree->left, is_full);
	traverse_is_full(tree->right, is_full);
	return (*is_full);
}
