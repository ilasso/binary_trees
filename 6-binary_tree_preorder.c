#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *binary_tree_preorder - goes through a binary tree using pre-order traversal
 *@tree: pointer to the root node of the tree to traverse
 *@func:  pointer to a function to call for each node.
 *Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	(void)(tree);

	if (tree == NULL || *func == NULL)
		return;

	func(tree->n);


	if (tree->left != NULL)
	{
		binary_tree_preorder(tree->left, func);
	}

	if (tree->right != NULL)
	{
		binary_tree_preorder(tree->right, func);
	}

return;
}
