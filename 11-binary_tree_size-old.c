#include "binary_trees.h"

size_t traverse_count(binary_tree_t *tree, size_t *count)
{
	if (tree == NULL)
		return (*(count));
	// add the head element
	*(count) = *(count) + 1;
	traverse_count(tree->left, count);
	traverse_count(tree->right, count);
}

/*
 * binary_tree_size the - function
 * @tree: the tree to be checked
 * Description: the function to check the size of a tree
 * return: size_t varible
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t *count;
	binary_tree_t tr;

	tr = (binary_tree_t*) tree;

	*(count) = 0;
	if (tree == NULL)
		return (0);
	return traverse_count(tr, count);
}
