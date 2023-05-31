#include "binary_trees.h"
/*
 * binary_tree_preorder - the function
 * @tree: pointer to a tree
 * @func: Pointer to function
 * Description: a function to traverse tree with preorder
 * return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
