#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if tree is perfect.
 * @tree: A pointer to a node of the BT.
 * Return: 0 on success.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

if (tree->left == NULL || tree->right == NULL)
{
return (0);
}

if (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right))
{
return (1);
}
return (0);
}
