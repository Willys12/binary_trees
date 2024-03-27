#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
if (first == NULL || second == NULL)
return (NULL);

if (first == second)
{
return ((binary_tree_t *)first);
}

if (((*first).left == second || (*first).right == second) ||
binary_trees_ancestor(first->left, second) ||
binary_trees_ancestor(first->right, second))
{
return ((binary_tree_t *)first);
}

if (binary_trees_ancestor(first->left, second) ||
binary_trees_ancestor(first->right, second))
{
return ((binary_tree_t *)first);
}

return (NULL);
}
