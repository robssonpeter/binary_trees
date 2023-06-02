#include "binary_trees.h"
/**
 * binary_tree_node - create a node
 * Description: the function that will create a new node for a tree
 * @parent: the pointer to the parent node
 * @value: an integer value that will be assigned to the tree
 * return: pointer to a node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = malloc(sizeof(binary_tree_t));

	if (tree == NULL)
	{
		return (NULL);
	}
	tree->parent = parent;
	tree->n = value;
	tree->left = NULL;
	tree->right = NULL;
	return (tree);
}

/*
 * is_node - the function
 * @node: pointer to a node to be checked
 * Description: a function to check if its a node
 * return: integer 1 or 0
 */
int is_node(binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left || node->right)
		return (1);
	else
		return (0);
}
