#include "binary_trees.h"

#define max(a, b) ((a) >= (b) ? (a) : (b))

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (1 + max(binary_tree_height(tree->left),
				binary_tree_height(tree->right)));
}
