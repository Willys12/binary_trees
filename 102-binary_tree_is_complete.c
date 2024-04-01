#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes in BT.
 * @tree: a pointer to the root node of the tree.
 * Return: 1 if the tree is complete, 0 otherwise.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

if (tree == NULL)
{
return (0);
}

return (1 + binary_tree_nodes(tree->left) +
binary_tree_nodes(tree->right));
}

/**
 * binary_tree_is_complete - Checks if the tree is complete.
 * @tree: a pointer to the root node of the tree.
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
size_t countN_left, countN_right;

if (tree == NULL)
{
return (0);
}

countN_left = binary_tree_nodes(tree->left);
countN_right = binary_tree_nodes(tree->right);

if (countN_left == countN_right)
{
return (1);
}
return (0);
}
