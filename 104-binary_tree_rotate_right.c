#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a left-rotation on a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return:  a pointer to the new root node.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *t1, *temp;

if (tree == NULL || tree->left == NULL)
{
return (NULL);
}
t1 = tree->left;
temp = t1->right;
t1->right = tree;
tree->left = temp;

if (temp != NULL)
temp->parent = tree;
temp = tree->parent;
tree->parent = t1;
t1->parent = temp;
if (temp != NULL)
{
if (temp->right == tree)
temp->right = t1;
else
temp->left = t1;
}

return (t1);
}
