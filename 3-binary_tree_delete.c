#include "binary_trees.h"
/*
 * binary_tree_delete - the function
 * @tree: the tree to be deleted
 * Description: Deleting the nodes of a tree
 * return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	if (tree->right)
		tree->right = NULL;
	if (tree->left)
		tree->left = NULL;
	free(tree);
}
