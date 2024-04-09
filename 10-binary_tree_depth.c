#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a tree
 * @tree: a tree
 * Return: depth of a tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
if (tree == NULL)
return (0);
while (tree->parent)
{
depth++;
tree = tree->parent;
}
return (depth);
}
