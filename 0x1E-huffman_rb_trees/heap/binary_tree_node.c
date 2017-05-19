#include "heap.h"
/**
 *binary_tree_node - Create a Heap node
 *@parent: The parent node of the node to be created
 *@data: The data that we want to store in the node to be created
 *Return: The new node
 */
binary_tree_node_t *binary_tree_node(binary_tree_node_t *parent, void *data)
{
	binary_tree_node_t *node;

	node = malloc(sizeof(binary_tree_node_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->data = data;
	return (node);
}
