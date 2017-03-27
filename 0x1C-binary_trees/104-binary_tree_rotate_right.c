#include "binary_trees.h"
/**
 *binary_tree_rotate_right - Rotating the tree to the right
 *@tree: The tree to be evaluated and modified
 *Return: Newly modified tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp, *new_root;

	temp = NULL;
	if (tree == NULL)
		return (NULL);
	if (tree->left == NULL)
		return (tree);
	if (tree->left->right != NULL)
		temp = tree->left->right;
	new_root = tree->left;
	tree->left->right = tree;
	tree->parent = tree->left;
	tree->left->parent = NULL;
	tree->left = temp;
	return (new_root);
}
