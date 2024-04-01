#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: Height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0;
size_t right_height = 0;

if (tree)
{
if ((*tree).left)
{
left_height = 1 + binary_tree_height((*tree).left);
}
if ((*tree).right)
{
right_height = 1 + binary_tree_height((*tree).right);
}
return ((left_height > right_height) ? left_height : right_height);
}
else
{
return (0);
}
}

/**
 * binary_tree_is_complete - Checks if the tree is complete.
 * @tree: a pointer to the root node of the tree.
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
int countN_left, countN_right;

if (tree == NULL)
{
return (0);
}

countN_left = binary_tree_height(tree->left);
countN_right = binary_tree_height(tree->right);

if (countN_left == countN_right)
{
return (1);
}
return (0);
}
