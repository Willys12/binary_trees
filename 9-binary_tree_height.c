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
