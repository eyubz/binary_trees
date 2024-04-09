#include "binary_trees.h"
int binary_tree_is_descendant(const binary_tree_t *node,
			      const binary_tree_t *ancestor);
/**
 * binary_trees_ancestor - Finds the lowest common ancestor
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: lowest common ancestor node, or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *ancestor = NULL;

	if (first == NULL || second == NULL)
		return (NULL);
	ancestor = first;
	while (ancestor != NULL)
	{
		if (binary_tree_is_descendant(second, ancestor))
			return ((binary_tree_t *)ancestor);
		ancestor = ancestor->parent;
	}
	return (NULL);
}

/**
 * binary_tree_is_descendant - Checks if a node is a descendant
 * @node: A pointer to the potential descendant node
 * @ancestor: A pointer to the potential ancestor node
 *
 * Return: 1 if node is a descendant of ancestor, 0 otherwise
 */
int binary_tree_is_descendant(const binary_tree_t *node,
			      const binary_tree_t *ancestor)
{
	while (node != NULL)
	{
		if (node == ancestor)
			return (1);
		node = node->parent;
	}
	return (0);
}
