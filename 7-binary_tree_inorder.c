#include "binary_trees.h"
/*
 * binary_tree_inorder - the function
 * @tree: pointer to a tree
 * @func: Pointer to function
 * Description: a function to traverse tree with inorder
 * return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
