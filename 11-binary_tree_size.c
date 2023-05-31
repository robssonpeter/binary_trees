#include "binary_trees.h"

size_t traverse_count(const binary_tree_t *tree, size_t *count)
{
	if (tree == NULL)
		return *count;

	(*count)++;
	traverse_count(tree->left, count);
	traverse_count(tree->right, count);

	return *count;
}

/*
 * binary_tree_size - function
 * @tree: the tree to be checked
 * Description: the function to check the size of a tree
 * Return: size_t variable
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	size_t *count = malloc(sizeof(size_t));
	*count = 0;

	size_t size = traverse_count(tree, count);

	free(count);
	return size;
}
