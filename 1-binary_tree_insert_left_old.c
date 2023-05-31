#include "binary_trees.h"

/**
 * binary_treee_insert_left  - the function
 * Description: a function to set the left item of a node
 * @parent: Pointer to the parent node
 * @value: value to be set
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t* node = binary_tree_node(parent, value);/*malloc(sizeof(binary_tree_t))*/;
	binary_tree_t* old_left = parent->left;

	/*node = binary_tree_node(parent, value);*/

	/*if (parent->left)
	{
		old_left = parent->left;
	}*/
	old_left->parent = node;
	old_left->left = NULL;
	old_left->right = NULL;
	node->left = old_left;
        parent->left = node;
	/*node->left->parent = old_left->parent;
	node->left->left = old_left->left;
	node->left->right = old_left->right;
	node->n = old_left->n;*/
	/*node->left = old_left;*/
	return (node);
}
