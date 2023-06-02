#include "binary_trees.h"

void traverse_count(binary_tree_t *tree, size_t *count)
{
	if (tree == NULL)
		return;
	// add the head element
	(*count)++;
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
	size_t *count = 0;
	/*binary_tree_t *tr;*/

	/*tr = (binary_tree_t*) tree;*/

	if (tree == NULL)
		return (0);
	(*count) = 1;
	traverse_count(tree->left, count);
	traverse_count(tree->right, count);
	return (*count);
}
