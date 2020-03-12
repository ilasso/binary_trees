#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *binary_tree_sibling - finds the sibling of a node
 *@node: pointer to the node to find the sibling
 *Return: return a pointer to the sibling node
 *        If node is NULL or the parent is NULL, return NULL
 *        If node has no sibling, return NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
		return (parent->right);

	return (parent->left);
}
