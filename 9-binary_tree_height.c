#include "binary_trees.h"

/*
 * binary_tree_height - the function
 * @tree: pointer to the tree
 * Description: the function to measure the hieght of a tree
 * return: size_t variable
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	binary_tree_t *left_tree = tree->left;
	binary_tree_t *right_tree = tree->right;

	if (tree == NULL)
		return (0);

	left_height = 0;
	while (left_tree)
	{
		left_height += 1;
		/* if left tree is null use the right tree*/
		if  (left_tree == NULL)
			left_tree = left_tree->right;
		else
			left_tree = left_tree->left;
	}

	right_height = 0;
	while (right_tree)
	{
		right_height += 1;
		if (right_tree->right == NULL)
			right_tree = right_tree->left;
		else
			right_tree = right_tree->right;
	}

	if (left_height > right_height)
		return (left_height);
	return (right_height);
}
