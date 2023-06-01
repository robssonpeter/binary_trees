#include "binary_trees.h"
/*
 * treverse_count_node - the function
 * @tree: pointer to a tree
 * @nodes: pointer to number of nodes
 * return: size_t variable
 * Description: the function to count nodes
 */
size_t traverse_count_node(binary_tree_t *tree, size_t *nodes)
{
	if (is_node(tree))
	{
		(*nodes)++;
		traverse_count_node(tree->left, nodes);
		traverse_count_node(tree->right, nodes);
	}
	return (*nodes);
}


/*
 * binary_tree_nodes - the function
 * @tree: the tree to be exmined
 * Description: the function to check how many nodes the tree has
 * return: size_t variable
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	nodes = 0;
	if (tree->right || tree->left)
	{
		nodes = 1;
		traverse_count_node(tree->left, &nodes);
		traverse_count_node(tree->right, &nodes);
	}
	return (nodes);
}
