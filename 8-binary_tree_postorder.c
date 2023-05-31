#include "binary_trees.h"
/*
 * binary_tree_postorder - the function
 * @tree: pointer to a tree
 * @func: Pointer to function
 * Description: a function to traverse tree with postorder
 * return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
