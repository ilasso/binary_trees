#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *binary_tree_uncle - finds the uncle of a node
 *@node:  pointer to the node to find the uncle
 *Return: pointer to the uncle node
 *        If node is NULL, return NULL
 *        If node has no uncle, return NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);


	parent = node->parent;

	if (parent->parent->left == parent)
		return (parent->parent->right);

	return (parent->parent->left);
}
