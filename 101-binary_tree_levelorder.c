#include "binary_trees.h"
/**
 * binary_tree_levelorder - level order traversal
 * @tree: a tree
 * @func: a vardiac function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *queue[1024], *current;
	int l = 0, r = 0;

	queue[r++] = tree;
	while (l < r)
	{
		current = queue[l++];
		func(current->n);
		if (current->left != NULL)
			queue[r++] = current->left;
		if (current->right != NULL)
			queue[r++] = current->right;
	}
}
