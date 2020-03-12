#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: pointer to the root node of the tree to traverse
 *Return: height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t Lheight;
	size_t Rheight;


	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
		Lheight = binary_tree_height(tree->left) + 1;
		Rheight = binary_tree_height(tree->right) + 1;

		if (Lheight > Rheight)
			return (Lheight);
		else
			return (Rheight);
	}
}

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
		    binary_tree_is_perfect(tree->right))
			return (1);
	}

return (0);

}
