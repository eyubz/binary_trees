#include "binary_trees.h"
/**
 * binary_tree_leaves - number of leaves in a tree
 * @tree: a tree
 * Return: counts leaves of binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t left = 0, right = 0;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
left = binary_tree_leaves(tree->left);
right = binary_tree_leaves(tree->right);
return (left + right);
}
