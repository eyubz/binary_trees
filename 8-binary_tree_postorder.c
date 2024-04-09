#include "binary_trees.h"
/**
 * binary_tree_postorder  - postorder traversal
 * @tree: a tree
 * @func: a function pointer
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL && func != NULL)
{
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
