#include "binary_trees.h"
/**
 * binary_tree_height - height of a tree
 * @tree: a tree
 * Return: height of a tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;
if (tree == NULL)
return (0);
left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return (left > right ? left : right);
}
