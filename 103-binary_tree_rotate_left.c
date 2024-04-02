#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return:  a pointer to the new root node.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *t1, *temp;

if (tree == NULL || tree->right == NULL)
{
return (NULL);
}
t1 = tree->right;
temp = t1->left;
t1->left = tree;
tree->right = temp;

if (temp != NULL)
temp->parent = tree;
temp = tree->parent;
tree->parent = t1;
t1->parent = temp;
if (temp != NULL)
{
if (temp->left == tree)
temp->left = t1;
else
temp->right = t1;
}

return (t1);
}
