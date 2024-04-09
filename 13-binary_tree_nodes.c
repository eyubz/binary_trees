#include "binary_trees.h"
/**
 * binary_tree_nodes - number of nodes with one child
 * @tree: a tree
 * Return: number of nodes with one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;
if (tree)
{
if (tree->left != NULL || tree->right != NULL)
count += 1;
count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);
}
return (count);
}
