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
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance factor
 *Return: If tree is NULL, return 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{

	size_t Lheight = 0;
	size_t Rheight = 0;


	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
		if (tree->left != NULL)
			Lheight = binary_tree_height(tree->left) + 1;
		if (tree->right != NULL)
			Rheight = binary_tree_height(tree->right) + 1;
		return (Lheight - Rheight);
	}

}
