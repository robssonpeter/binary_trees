#include "binary_trees.h"

size_t leaves(const binary_tree_t *tree, size_t *count)
{
	if (tree == NULL)
		return *count;

	if (tree->left == NULL && tree->right == NULL)
		(*count)++;

	leaves(tree->left, count);
	leaves(tree->right, count);

	return *count;
}

/*
 * binary_tree_leaves - the function
 * @tree: the binary tree to be checked
 * Description: the function to find leaves of a binary tree
 * Return: size_t number
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return 0;

	return leaves(tree, &count);
}
