#include "binary_trees.h"
#include "9-binary_tree_height.c"
/*
 * binary_tree_balance - the function
 * @tree: pointer to a tree
 * Description: the function that checks the balance factor of a node
 * return: integer
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
                return (+0);
	else if (tree->right && tree->left)
		return (2);
	else if (tree->left && tree->right == NULL)
		return (1);
	else if (tree->left == NULL && tree->right)
		return (-1);
	return (0);
}
